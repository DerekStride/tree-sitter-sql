ALTER PROCEDURE import_order (id INTEGER)
-- <- keyword
--              ^ function
--                            ^ parameter
RETURNS (orderok SMALLINT, orderid VARCHAR(10))
-- <- keyword
AS
DECLARE VARIABLE total NUMERIC(15,2);
--      ^ keyword
--               ^ variable
DECLARE VARIABLE payload BLOB SUB_TYPE 0 SEGMENT SIZE 80;
--                                     ^ number
--                                                    ^ number
BEGIN
  total = 0;
--^ variable
  SELECT amount FROM orders WHERE order_id = :id INTO :total;
--                                           ^ parameter
  IF (total > 0) THEN
--^ conditional
  BEGIN
    FOR SELECT id FROM order_lines WHERE order_id = :id INTO :orderid DO
--  ^ repeat
    BEGIN
      EXECUTE PROCEDURE update_line(:orderid) RETURNING_VALUES :orderok;
--    ^ keyword
      total = total + 1;
    END
  END
  ELSE IF (total = 0) THEN
    orderok = 1;
  ELSE
    orderok = 2;
  WHILE (total > 0) DO
    total = total - 1;
  SUSPEND;
--^ keyword
  WHEN SQLCODE -803 DO
  BEGIN
    orderok = 0;
    EXIT;
  END
END^

SELECT '^not a terminator', ':not_a_parameter', 2 ^ 3 FROM RDB$DATABASE^
