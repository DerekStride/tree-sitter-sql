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
          -- ^ string
  AND m.title LIKE '%foo%';
  -- <- keyword.operator
                -- ^ string
