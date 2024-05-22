-- prints the full description of the table
CREATE DATABASE IF NOT EXISTS hbtn_0c_0;

USE hbtn_0c_0;

SELECT column_name, column_type, is_nullable, column_key, column_default, extra
FROM information_schema.columns
WHERE table_name = 'first_table';
