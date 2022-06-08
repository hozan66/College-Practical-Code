use hozan10;

create table salesRep(
RepNbr int primary key,
Name nvarchar(50),
RepOffice int,
Quota money,
Sales money
);

insert into salesRep values(53,'Bill Smith',1,100000.00,0.00);
insert into salesRep values(89,'Jes Jones',2,50000.00,130000.00);

select * from  salesRep;

create table customers(
CustNbr int primary key,
Company nvarchar(50),
CustReb int foreign key references salesRep(RepNbr),
CreditLimit money
);

insert into customers values(211,'connor co',89,50000.00);
insert into customers values(522,'amaratunga enterprises',89,40000.00);
insert into customers values(890,'feni fabricators',53,1000000.00);

select * from  customers;

create table orders(
OrderNbr int,
Cust int foreign key references customers(CustNbr),
Prod nvarchar(50),
Qty int,
Amt money,
Disc float
);

insert into orders values(1,211,'bulldozer',7,31000.00,0.2);
insert into orders values(2,522,'riveter',2,4000.00,0.3);
insert into orders values(3,522,'crane',1,500000.00,0.4);

select * from  orders;

select OrderNbr, Amt, Company, Name from salesRep s join customers c
on s.RepNbr=c.CustReb
join orders o
on c.CustNbr=o.Cust;

drop table orders;
drop table customers;
drop table salesRep;
