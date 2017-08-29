UPDATE product_master set sell_price=1150 where description='1.44floppies';
DELETE from client_master where client_no=0001;
UPDATE client_master set city='Bombay' where CLIENT_NO=0005;

INSERT INTO CLIENT_MASTER values('0001','IVAN','BOMBAY','MAHARASHTRA',400054,15000);

UPDATE CLIENT_MASTER set bal_due=1000 where client_no=0001;
SELECT 15*SELL_PRICE from PRODUCT_MASTER where SELL_PRICE>1500;
SELECT name from CLIENT_MASTER where city like '_A%';
SELECT name from CLIENT_MASTER where name like '_A%';
SELECT description from product_master order by DESCRIPTION;
SELECT count(*) from PRODUCT_MASTER;
SELECT avg(sell_price) from PRODUCT_MASTER;
SELECT min(sell_price) from PRODUCT_MASTER;
SELECT min(sell_price) as min_price, max(sell_price) as max_price from PRODUCT_MASTER;
SELECT count(*) from PRODUCT_MASTER where SELL_PRICE>=1500;