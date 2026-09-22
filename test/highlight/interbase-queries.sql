SET TERM ^ ;
CREATE GENERATOR gen_order^
--     ^ keyword
SET GENERATOR gen_order TO 0^
--                         ^ number

DELETE FROM orders WHERE id = 1^
UPDATE orders SET flag = 'Y' WHERE id = 2^
ALTER PROCEDURE p RETURNS (result INTEGER) AS
BEGIN
  SELECT id FROM orders WHERE ((SELECT id FROM other_orders) = 1)
    ORDER BY id ROWS 1 TO 1 INTO :result;
--              ^ keyword
  SUSPEND;
END^

SELECT 1^
SELECT 2 ^ 3 FROM orders WHERE id = 4^
SELECT 2 ^ /* exponent continues on the next line */
  3 FROM orders^
SET TERM ; ^
