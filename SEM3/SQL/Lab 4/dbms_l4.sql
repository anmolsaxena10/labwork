CREATE TABLE challan_header
(
  challan_no  varchar2(6) Primary key,
  s_order_no varchar2(6)  references sales_order,
  challan_date  date  not null,
   billed_yn  char(1)  default 'n' check(billed_yn in ('n','y'))
);

CREATE TABLE challan_details
(
  challan_no varchar2(6) references challan_details,
  product_no  varchar(6) references product_master,
  qty_disp  number(4,2) not null,
  primary key(challan_no,product_no)
);
  
 
