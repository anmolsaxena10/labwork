SELECT description,name FROM client_master natural join sales_order natural join product_master natural join sales_order_details
WHERE name = 'IVAN';

SELECT description,sum(qty_order) FROM SALES_ORDER_DETAILS natural join PRODUCT_MASTER GROUP BY description;

SELECT description,qty_order FROM SALES_ORDER_DETAILS natural join PRODUCT_MASTER natural join SALES_ORDER WHERE order_status = 'Ip';

SELECT DISTINCT product_no,description FROM SALES_ORDER_DETAILS natural join PRODUCT_MASTER WHERE qty_disp != 0 ;

SELECT name FROM CLIENT_MASTER natural join PRODUCT_MASTER natural join SALES_ORDER natural join SALES_ORDER_DETAILS WHERE description = 'CD Drive';

SELECT product_no,s_order_no FROM SALES_ORDER_DETAILS natural join PRODUCT_MASTER where description = '1.44floppies' and qty_order < 5;

SELECT description,qty_order FROM client_master natural join sales_order natural join product_master natural join sales_order_details WHERE name = 'IVAN' or name = 'VANDANA';

SELECT description,client_no FROM sales_order natural join product_master natural join sales_order_details WHERE client_no = '0001' or client_no = '0002';

SELECT s_order_no,client_no,salesman_no FROM sales_order WHERE  ;