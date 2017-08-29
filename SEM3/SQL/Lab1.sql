CREATE TABLE client_master(client_no varchar2(6), name varchar2(20), city varchar(15), state varchar2(15), pincode number(6), bal_due number(10,2));

CREATE TABLE product_master(product_no varchar2(8), description varchar2(15), profit_percent number(3,2), unit_measure varchar2(8), qty_on_hand number(5), reorder_level number(3), sell_price number(6), cost_price number(6));

INSERT INTO client_master values('0001','IVAN','BOMBAY','MAHARASHTRA',400054,15000);
INSERT INTO client_master values('0002','VANDANA','MADRAS','TAMILNADU',780001,0);
INSERT INTO client_master values('0003','PRAMADA','BOMBAY','MAHARASHTRA',400057,5000);
INSERT INTO client_master values('0004','BASU','BOMBAY','MAHARASHTRA',400056,0);
INSERT INTO client_master values('0005','RAVI','DELHI',NULL,100001,2000);
INSERT INTO client_master values('0006','RUKMINI','BOMBAY','MAHARASHTRA',400050,0);

INSERT INTO product_master values('P00001','1.44floppies',5,'PIECE',100,20,525,50);
INSERT INTO product_master values('P03453','Monitors',6,'PIECE',10,3,12000,11200);
INSERT INTO product_master values('P06734','Mouse',5,'PIECE',20,5,1050,500);
INSERT INTO product_master values('P07865','1.22floppies',5,'PIECE',100,20,525,500);
INSERT INTO product_master values('P07868','Keyboars',2,'PIECE',10,3,3150,3050);
INSERT INTO product_master values('P07885','CD Drive',2.5,'PIECE',10,3,5250,5100);
INSERT INTO product_master values('P07965','540 HDD',4,'PIECE',10,3,8400,8000);
INSERT INTO product_master values('P07975','1.44 Drive',5,'PIECE',10,3,1050,1000);
INSERT INTO product_master values('P08865','1.22 DRIVE',5,'PIECE',2,3,1050,1000);
