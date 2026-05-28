import { paren_list, comma_list } from "../../grammar/helpers.js";

export default {
  _table_settings: $ => choice(
    $.table_partition,
    $.stored_as,
    $.storage_location,
    $.table_sort,
    $.table_cluster,
    $.row_format,
    seq($.keyword_tblproperties, paren_list($.table_option, true)),
    seq($.keyword_without, $.keyword_oids),
    $.storage_parameters,
    // USING <data_source> [OPTIONS (...)] — the canonical Spark/Delta table form
    $.table_using,
    // OPTIONS (...) without a preceding USING (allowed in some Spark DDL contexts)
    $.table_options,
    // COMMENT 'string' — table-level comment
    seq($.keyword_comment, alias($.literal, $.literal)),
    // Databricks SHALLOW CLONE / DEEP CLONE
    $.shallow_clone,
    $.table_option,
  ),

  // USING <format>  e.g. USING delta, USING parquet, USING org.apache.spark.sql.json
  table_using: $ => seq(
    $.keyword_using,
    field('format', $.object_reference),
  ),

  // OPTIONS ( key = value [, ...] )
  table_options: $ => seq(
    $.keyword_options,
    paren_list($.table_option, true),
  ),

  shallow_clone: $ => seq(
    choice($.keyword_shallow, $.keyword_deep),
    $.keyword_clone,
    $.object_reference,
  ),
};
