SELECT MAX(m.id) max
-- <- keyword
    -- ^ function.call
        -- ^ type
          -- ^ field
              -- ^ variable
FROM my_table m
-- <- keyword
  -- ^ type
           -- ^ variable
WHERE m.id > 4
-- <- keyword
     -- ^ field
        -- ^ operator
          -- ^ number
  AND m.title LIKE '%foo%';
  -- <- keyword.operator
                -- ^ string

SELECT 1.5
--     ^ float

SELECT FLATTEN(INPUT => a)
--             ^ parameter
--                   ^ operator

SELECT * RENAME d AS e
--              ^ field
--                   ^ variable

SELECT v:a
--       ^ field
