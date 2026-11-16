GRANT MAINTAIN ON items TO admin;
-- <- keyword
   -- ^ keyword
GRANT ALL PRIVILEGES ON items TO admin;
       -- ^ keyword
REVOKE SELECT ON items FROM reader GRANTED BY CURRENT_USER;
-- <- keyword
                                -- ^ keyword
GRANT USAGE ON SCHEMA app TO reader;
       -- ^ keyword
GRANT EXECUTE ON ALL ROUTINES IN SCHEMA app TO reader;
                   -- ^ keyword
