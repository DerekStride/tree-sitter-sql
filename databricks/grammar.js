import spark from '../spark/grammar.js';
import { optional_parenthesis, paren_list, comma_list, make_keyword } from '../grammar/helpers.js';

import vacuum_rules   from './grammar/vacuum.js';
import optimize_rules from './grammar/optimize.js';
import restore_rules  from './grammar/restore.js';
import grant_rules    from './grammar/grant.js';
import drop_rules     from './grammar/drop.js';
import describe_rules from './grammar/describe.js';
import show_rules     from './grammar/show.js';
import cache_rules    from './grammar/cache.js';
import resource_rules from './grammar/resource.js';
import call_rules     from './grammar/call.js';
import create_rules   from './grammar/create.js';
import alter_rules    from './grammar/alter.js';
import apply_rules    from './grammar/apply.js';

export default grammar(spark, {
  name: 'databricks_sql',

  conflicts: $ => [
    [$.object_reference, $._qualified_field],
    [$._column, $._qualified_field],
    [$.object_reference],
    [$.between_expression, $.binary_expression],
    [$.from],
    [$.create_function],
    [$.list, $.grouping_set],
    [$.list, $.rollup_element],
    [$.list, $.cube_element],
    [$.term],
    [$.values],
    [$.select_expression],
    [$.set_operation],
    [$.group_by],
    [$.subquery, $.lateral_subquery],
    [$.order_target],
    [$.iceberg_write_order],
    [$.cluster_by],
    [$.distribute_by],
    [$.sort_by],
    // Inherited from Hive via Spark: multi-table INSERT ambiguity
    [$.select, $.multi_table_insert],
    [$.lateral_cross_join],
    // Inherited from Hive via Spark: SERDE optional WITH SERDEPROPERTIES ambiguity
    [$.row_format],
    [$.lateral_view],
  ],

  rules: {

    _ddl_statement: $ => choice(
      // Base ANSI SQL DDL
      $._create_statement,
      $._alter_statement,
      $._drop_statement,
      $._rename_statement,
      $._optimize_statement,
      $._merge_statement,
      $._refresh_statement,
      $.comment_statement,
      $.set_statement,
      $.reset_statement,
      $.use_statement,
      // Databricks / Delta / Unity Catalog
      $.restore_table_statement,
      $.convert_to_delta_statement,
      $.fsck_repair_statement,
      $.reorg_table_statement,
      $.generate_statement,
      $.msck_repair_statement,
      $.grant_statement,
      $.revoke_statement,
      $.deny_statement,
      // Databricks / Spark UNLOAD (Athena)
      $._unload_statement,
      // Databricks CACHE
      $.cache_table,
      $.uncache_table,
      $.clear_cache,
      // Databricks DESCRIBE
      $.describe_table,
      $.describe_history,
      $.describe_detail,
      $.describe_uc_object,
      $.describe_query,
      // Databricks resource management
      $.add_resource_statement,
      $.list_resource_statement,
      // Databricks CALL + EXECUTE IMMEDIATE
      $.call_statement,
      $.execute_immediate_statement,
      // Databricks APPLY CHANGES (DLT)
      $.apply_changes_statement,
      // Databricks SHOW
      $._show_statement,
      // Databricks CREATE extensions
      $.create_namespace,
      $.create_streaming_table,
      $.create_live_table,
      $.create_table_like,
      $.create_catalog,
      $.create_volume,
      $.create_connection,
      $.create_credential,
      $.create_external_location,
      $.create_share,
      $.create_recipient,
      $.create_provider,
      $.create_policy,
    ),

    _optimize_statement: $ => choice(
      $._optimize_table,   // Iceberg (from base via spark)
      $._compute_stats,    // Hive/Impala (from spark)
      $._spark_analyze,    // Spark ANALYZE (from spark)
      $._delta_optimize,   // Databricks Delta
      $._vacuum_table,     // Databricks Delta vacuum
    ),

    _refresh_statement: $ => choice(
      $.refresh_materialized_view,
      $.refresh_table_databricks,
      $.refresh_function,
    ),

    _show_statement: $ => seq(
      $.keyword_show,
      choice(
        $._show_create,
        $.keyword_all,
        $._show_tables,
        $._show_catalogs,
        $._show_namespaces,
        $._show_volumes,
        $._show_grants,
        $._show_uc_object_type,
        $._show_tblproperties,
        $._show_partitions,
        $._show_columns,
      ),
    ),

    _drop_statement: $ => choice(
      // Base drops
      $.drop_table,
      $.drop_view,
      $.drop_materialized_view,
      $.drop_index,
      $.drop_type,
      $.drop_schema,
      $.drop_database,
      $.drop_role,
      $.drop_sequence,
      $.drop_function,
      $.drop_procedure,
      // Databricks drops
      $.drop_table_purge,
      $.drop_catalog,
      $.drop_namespace,
      $.drop_connection,
      $.drop_credential,
      $.drop_external_location,
      $.drop_volume,
      $.drop_share,
      $.drop_recipient,
      $.drop_provider,
      $.drop_policy,
    ),

    // Override Spark's table_partition to support Iceberg-style transforms.
    table_partition: $ => seq(
      choice(
        seq($.keyword_partition, $.keyword_by, choice($.keyword_range, $.keyword_hash)),
        seq($.keyword_partitioned, $.keyword_by),
        $.keyword_partition,
      ),
      choice(
        paren_list($.iceberg_partition_field, true),
        $.column_definitions,
        paren_list($._key_value_pair, true),
      ),
    ),

    // Override _alter_specifications to add Iceberg/Unity Catalog specs
    _alter_specifications: $ => choice(
      // Base ANSI specs
      $.add_partition,
      $.add_column,
      $.add_constraint,
      $.drop_constraint,
      $.alter_column,
      $.modify_column,
      $.change_column,
      $.drop_column,
      $.rename_object,
      $.rename_column,
      $.set_schema,
      $.change_ownership,
      // Spark iceberg partition field operations (inherited from spark, kept here to avoid regression)
      seq($.keyword_add, $.keyword_partition, $.keyword_field, $.iceberg_partition_transform),
      seq($.keyword_drop, $.keyword_partition, $.keyword_field, $.iceberg_partition_transform),
      seq($.keyword_replace, $.keyword_partition, $.keyword_field, $.iceberg_partition_transform,
          $.keyword_with, $.iceberg_partition_transform),
      // Spark iceberg write order (must be kept so ALTER TABLE ... WRITE ORDERED BY still parses)
      $.iceberg_write_order,
      seq($.keyword_write, $.keyword_distributed, $.keyword_by, $.keyword_partition),
      // Iceberg / Unity Catalog specs
      $._alter_table_iceberg_spec,
    ),

    // Override set_statement to add Databricks-specific SET forms
    set_statement: $ => prec.right(choice(
      // Inherited from Spark
      seq($.keyword_set, $.keyword_constraints, choice($.keyword_all, comma_list($.identifier, true)), choice($.keyword_deferred, $.keyword_immediate)),
      seq($.keyword_set, $.keyword_transaction, $._transaction_mode),
      seq($.keyword_set, $.keyword_transaction, $.keyword_snapshot, $._transaction_mode),
      seq($.keyword_set, $.keyword_session, $.keyword_characteristics, $.keyword_as, $.keyword_transaction, $._transaction_mode),
      seq($.keyword_set, $.object_reference, '=', $._expression),
      // Databricks-specific
      seq($.keyword_set, $.keyword_catalog, $.object_reference),
      seq($.keyword_set, optional($.keyword_global), $.keyword_time, $.keyword_zone, choice($._expression, $.keyword_local)),
    )),

    // Databricks-specific keywords (not in Spark, not ANSI)
    keyword_retain:     _ => make_keyword("retain"),
    keyword_hours:      _ => make_keyword("hours"),
    keyword_dry:        _ => make_keyword("dry"),
    keyword_run:        _ => make_keyword("run"),
    keyword_zorder:     _ => make_keyword("zorder"),
    keyword_restore:    _ => make_keyword("restore"),
    keyword_convert:    _ => make_keyword("convert"),
    keyword_fsck:       _ => make_keyword("fsck"),
    keyword_repair:     _ => make_keyword("repair"),
    keyword_reorg:      _ => make_keyword("reorg"),
    keyword_apply:      _ => make_keyword("apply"),
    keyword_purge:      _ => make_keyword("purge"),
    keyword_generate:   _ => make_keyword("generate"),
    keyword_msck:       _ => make_keyword("msck"),
    keyword_partitions: _ => make_keyword("partitions"),
    keyword_sync:       _ => make_keyword("sync"),
    keyword_grant:      _ => make_keyword("grant"),
    keyword_revoke:     _ => make_keyword("revoke"),
    keyword_deny:       _ => make_keyword("deny"),
    keyword_privileges: _ => make_keyword("privileges"),
    keyword_service:    _ => make_keyword("service"),
    keyword_principal:  _ => make_keyword("principal"),
    keyword_recipient:  _ => make_keyword("recipient"),
    keyword_metastore:  _ => make_keyword("metastore"),
    keyword_volume:     _ => make_keyword("volume"),
    keyword_credential: _ => make_keyword("credential"),
    keyword_share:      _ => make_keyword("share"),
    keyword_files:      _ => make_keyword("files"),
    keyword_file:       _ => make_keyword("file"),
    keyword_catalog:    _ => make_keyword("catalog"),
    keyword_describe:   _ => make_keyword("describe"),
    keyword_query:      _ => make_keyword("query"),
    keyword_call:       _ => make_keyword("call"),
    keyword_branch:     _ => make_keyword("branch"),
    keyword_tag:        _ => make_keyword("tag"),
    keyword_identity:   _ => make_keyword("identity"),
    keyword_position:   _ => make_keyword("position"),
    keyword_distributed:_ => make_keyword("distributed"),
    keyword_ordered:    _ => make_keyword("ordered"),
    keyword_namespace:  _ => make_keyword("namespace"),
    keyword_streaming:  _ => make_keyword("streaming"),
    keyword_live:       _ => make_keyword("live"),
    keyword_provider:   _ => make_keyword("provider"),
    keyword_options:    _ => make_keyword("options"),
    keyword_url:        _ => make_keyword("url"),
    keyword_grants:     _ => make_keyword("grants"),
    keyword_history:    _ => make_keyword("history"),
    keyword_detail:     _ => make_keyword("detail"),
    keyword_global:     _ => make_keyword("global"),
    keyword_lazy:       _ => make_keyword("lazy"),
    keyword_clear:      _ => make_keyword("clear"),
    keyword_uncache:    _ => make_keyword("uncache"),
    keyword_jar:        _ => make_keyword("jar"),
    keyword_handler:    _ => make_keyword("handler"),
    keyword_environment:_ => make_keyword("environment"),
    keyword_parameter:  _ => make_keyword("parameter"),
    keyword_style:      _ => make_keyword("style"),
    keyword_shallow:    _ => make_keyword("shallow"),
    keyword_deep:       _ => make_keyword("deep"),
    keyword_clone:      _ => make_keyword("clone"),
    keyword_jars:       _ => make_keyword("jars"),
    keyword_archive:    _ => make_keyword("archive"),
    keyword_archives:   _ => make_keyword("archives"),
    keyword_list:       _ => make_keyword("list"),
    keyword_catalogs:   _ => make_keyword("catalogs"),
    keyword_namespaces: _ => make_keyword("namespaces"),
    keyword_volumes:    _ => make_keyword("volumes"),
    keyword_connections:_ => make_keyword("connections"),
    keyword_credentials:_ => make_keyword("credentials"),
    keyword_shares:     _ => make_keyword("shares"),
    keyword_recipients: _ => make_keyword("recipients"),
    keyword_providers:  _ => make_keyword("providers"),
    keyword_appends:    _ => make_keyword("appends"),
    keyword_vacuum:     _ => make_keyword("vacuum"),
    keyword_policy:     _ => make_keyword("policy"),

    // Databricks-specific rule definitions
    ...vacuum_rules,
    ...optimize_rules,
    ...restore_rules,
    ...grant_rules,
    ...drop_rules,
    ...describe_rules,
    ...show_rules,
    ...cache_rules,
    ...resource_rules,
    ...call_rules,
    ...create_rules,
    ...alter_rules,
    ...apply_rules,

  },
});
