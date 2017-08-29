create table member(mno varchar2(5) primary key, name varchar2(15),book varchar2(20));
create table books(isbn varchar2(20) primary key, title varchar2(20),authors varchar2(20), publisher varchar2(20));
create table borrowed(mno varchar2(5) references member,isbn varchar2(20) references books,date_ date,primary key(mno,isbn));

insert into member values('m1','Aakash','b1');
insert into member values('m2','Daksh','b2');
insert into member values('m3','Arnav','b3');
insert into member values('m4','Radha','b4');
insert into member values('m5','Bijal','b1');
select * from member;

insert into books values('i1','t1','a1','p1');
insert into books values('i2','t2','a1','p1');
insert into books values('i3','t3','a2','p1');
insert into books values('i4','t4','a2','p2');
insert into books values('i5','t5','a3','p5');
insert into books values('i6','t6','a4','p3');
select * from books;

insert into borrowed values('m1','i1',to_date('12101998','ddmmyy'));
insert into borrowed values('m2','i2',to_date('12041998','ddmmyy'));
insert into borrowed values('m1','i3',to_date('12101998','ddmmyy'));
insert into borrowed values('m2','i4',to_date('12051999','ddmmyy'));
insert into borrowed values('m3','i5',to_date('120304','mmddyy'));
insert into borrowed values('m1','i2',to_date('120304','mmddyy'));
select * from borrowed;

ans (i): select distinct name,isbn from borrowed natural join books natural join member where books.PUBLISHER='p1';
ans(iii):select books.AUTHORS,count(borrowed.ISBN) from books  FULL outer join BORROWED on BORROWED.ISBN = books.ISBN group by authors;

commit;

ans(ii):
select distinct name from borrowed natural join books natural join member where 
isbn in(select isbn from books where publisher='p1') 
group by name having count(*)=(select count(*) from books where publisher='p1');








