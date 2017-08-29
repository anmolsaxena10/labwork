CREATE TABLE challan_header
(
  challan_no  varchar2(6) Primary key,
  s_order_no varchar2(6)  references sales_order,
  challan_date  date  not null,
   billed_yn  char(1)  default 'n' check(billed_yn in ('N','Y'))
);

CREATE TABLE challan_details
(
  challan_no varchar2(6) references challan_header,
  product_no varchar2(8) references product_master,
  qty_disp number(4,2) not null,
  primary key(challan_no,product_no)
);

INSERT INTO CHALLAN_HEADER values('CH9001','019001',to_date('121295','ddmmyy'),'Y');
INSERT INTO CHALLAN_HEADER values('CH6865','046866',to_date('121195','ddmmyy'),'Y');
INSERT INTO CHALLAN_HEADER values('CH3965','010008',to_date('121095','ddmmyy'),'Y');

INSERT INTO CHALLAN_DETAILS values('CH9001','P00001',4);
INSERT INTO CHALLAN_DETAILS values('CH9001','P07965',1);
INSERT INTO CHALLAN_DETAILS values('CH9001','P07885',1);
INSERT INTO CHALLAN_DETAILS values('CH6865','P07868',3);
INSERT INTO CHALLAN_DETAILS values('CH6865','P03453',4);
INSERT INTO CHALLAN_DETAILS values('CH6865','P00001',10);
INSERT INTO CHALLAN_DETAILS values('CH3965','P00001',5);
INSERT INTO CHALLAN_DETAILS values('CH3965','P07975',2);


ALTER TABLE client_master
ADD (phone_no number(10));

