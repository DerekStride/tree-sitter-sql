import { comma_list } from '../../grammar/helpers.js';

export default {

  // ARRAY<type>
  bq_array_type: $ => seq(
    $.keyword_array,
    '<',
    $._type,
    '>',
  ),

  // STRUCT<[name type, ...]>
  bq_struct_type: $ => seq(
    $.keyword_struct,
    '<',
    optional(
      comma_list(
        seq(optional(field('name', $.identifier)), $._type),
        false,
      ),
    ),
    '>',
  ),

  // Override _type to add BigQuery-native types and parametric ARRAY/STRUCT
  _type: $ => prec.left(
    choice(
      // ANSI base types (re-enumerated)
      $.keyword_boolean,
      $.bit,
      $.binary,
      $.varbinary,
      $.smallint,
      $.int,
      $.bigint,
      $.decimal,
      $.numeric,
      $.double,
      $.float,
      $.char,
      $.varchar,
      $.nchar,
      $.nvarchar,
      $.keyword_date,
      $.time,
      $.timestamp,
      $.keyword_interval,
      $.keyword_json,
      $.keyword_xml,
      $.keyword_string,
      $.enum,
      // BigQuery-specific built-in types
      $.keyword_int64,
      $.keyword_float64,
      $.keyword_bytes,
      $.keyword_bignumeric,
      $.keyword_geography,
      $.keyword_datetime,
      // BigQuery parametric types
      $.bq_array_type,
      $.bq_struct_type,
      // Fallback: custom type (object_reference)
      field('custom_type', $.object_reference),
    ),
  ),

};
