CREATE TRIGGER orders_bi FOR orders ACTIVE BEFORE INSERT
-- <- keyword
--             ^ function
POSITION 10
--       ^ number
AS
BEGIN
  NEW.id = GEN_ID(gen_order, 1);
--    ^ variable
  IF (NEW.total < 0) THEN
    EXCEPTION invalid_total;
END;
-- ^ punctuation.delimiter

ALTER TRIGGER orders_bi AS
DECLARE VARIABLE stamp DATE;
BEGIN
  stamp = CAST('now' AS DATE);
  NEW.updated_at = stamp;
  IF (OLD.total <> NEW.total) THEN
    EXECUTE PROCEDURE publish_order(NEW.id);
END;
