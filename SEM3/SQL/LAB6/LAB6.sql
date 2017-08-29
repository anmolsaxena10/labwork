select * from SALES_ORDER;

SELECT client_no,salesman_no,s_order_no from sales_order natural join (Select client_no from (SELECT client_no, count(salesman_no) from sales_order
group by client_no having count(distinct salesman_no) > 1));

INSERT INTO sales_order values('019800',to_date('120196','ddmmyy'),'0001','500004','F','N',to_date('200196','ddmmyy'),'Ip');

SELECT product_no,description, sum(qty_disp) from product_master natural join sales_order_details group by product_no,description;

SELECT description,sum(qty_disp*product_rate) Price from product_master natural join sales_order_details natural join sales_order where qty_disp != 0 and order_status = 'F' group by description;

SELECT client_no,avg(qty_disp),sum(qty_disp*product_rate) from sales_order_details natural join sales_order group by client_no having sum(qty_disp*product_rate) <= 15000;

SELECT description,sum(qty_disp) from product_master natural join client_master natural join sales_order natural join sales_order_details where name = 'IVAN' group by description;

SELECT name from product_master natural join client_master natural join sales_order natural join sales_order_details where description = 'CD Drive';

SELECT description from product_master natural join client_master natural join sales_order natural join sales_order_details where name = 'IVAN' or name='VANDANA';