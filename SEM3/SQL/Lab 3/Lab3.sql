select * from client_master;
ALTER TABLE client_master ADD primary key (client_no);
ALTER TABLE product_master ADD primary key (product_no);
describe client_master;

CREATE TABLE sales_master(
salesman_no varchar2(6) primary key check(salesman_no like '5%'),
sal_name varchar2(20) not null, 
address varchar2(40) not null, 
city varchar2(20), 
state varchar2(20),
pincode number(6), 
sal_amt number(8,2) not null check(sal_amt > 0), 
tgt_to_get number(6,2) not null check(tgt_to_get > 0),
ytd_sales number(6,2) not null check(ytd_sales > 0), 
remarks varchar2(30)
);

CREATE TABLE sales_order(
s_order_no varchar2(6) primary key check(s_order_no like '0%'),
s_order_date date, 
client_no varchar2(6)  references client_master, 
salesman_no varchar2(6) references sales_master,
dely_type char(1) default 'F' check(dely_type in ('P','F')),
billed_yn char(1) check(billed_yn in ('Y','N')),
dely_date date, 
order_status varchar2(10) check(order_status in ('Ip','F','B','C')),
constraint o_dates check(dely_date > s_order_date)
);

describe sales_order;

CREATE TABLE sales_order_details(
s_order_no varchar2(6) references sales_order,
product_no varchar2(6) references product_master,
qty_order number(8),
qty_disp number(8),
product_rate number(10,2)
);

alter table sales_order_details add primary key(s_order_no,product_no);

INSERT INTO sales_master values('500001','Kiran','A/14 worli','Bombay','Mah',400002,3000,100,50,'Good');
INSERT INTO sales_master values('500002','Manish','65, nariman','Bombay','Mah',400001,3000,200,100,'Good');
INSERT INTO sales_master values('500003','Ravi','P-7 bandra','Bombay','Mah',400032,3000,200,100,'Good');
INSERT INTO sales_master values('500004','Ashish','A/5 juhu','Bombay','Mah',400044,3500,200,150,'Good');


INSERT INTO sales_order values('019001',to_date('120196','ddmmyy'),'0001','500001','F','N',to_date('200196','ddmmyy'),'Ip');
INSERT INTO sales_order values('019002',to_date('250196','ddmmyy'),'0002','500002','P','N',to_date('270196','ddmmyy'),'C');
INSERT INTO sales_order values('016865',to_date('180296','ddmmyy'),'0003','500003','F','Y',to_date('200296','ddmmyy'),'F');
INSERT INTO sales_order values('019003',to_date('030496','ddmmyy'),'0001','500001','F','Y',to_date('070496','ddmmyy'),'F');
INSERT INTO sales_order values('046866',to_date('200596','ddmmyy'),'0004','500002','P','N',to_date('220596','ddmmyy'),'C');
INSERT INTO sales_order values('010008',to_date('240596','ddmmyy'),'0005','500004','F','N',to_date('260596','ddmmyy'),'Ip');


insert into sales_order_details values('019001','P00001',4,4,525);
insert into sales_order_details values('019001','P07965',2,1,8400);
insert into sales_order_details values('019001','P07885',2,1,5250);
insert into sales_order_details values('019002','P00001',10,0,525);
insert into sales_order_details values('046865','P07868',3,3,3150);
insert into sales_order_details values('046865','P07885',10,10,5250);
insert into sales_order_details values('019003','P00001',4,4,1050);
insert into sales_order_details values('019003','P03453',2,2,1050);
insert into sales_order_details values('046866','P06734',1,1,12000);
insert into sales_order_details values('046866','P07965',1,0,8400);
insert into sales_order_details values('010008','P07975',1,0,1050);
insert into sales_order_details values('010008','P00001',10,5,525);
