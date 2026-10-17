CREATE TABLE t (a ARRAY<STRING>)
ROW FORMAT SERDE 'serde.class'
        -- ^ keyword
STORED AS INPUTFORMAT 'input.class'
        -- ^ keyword
OUTPUTFORMAT 'output.class';
-- <- keyword
