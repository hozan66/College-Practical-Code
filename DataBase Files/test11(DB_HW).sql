use hozan4
/* Name:Hozan Ageed Farho */
if object_id('outorder') is not null

drop table inorder;
drop table outorder;
drop table customers;
drop table suppliers;
drop table items;

create table suppliers(
  Idsupp int primary key,
  SupName varchar(20),
  [Address] varchar(25),
  Tel int
);

create table items(
  Iditm int primary key,
  itemName varchar(20),
  price money
);

create table inorder(
  Idinod int primary key,
  orderdate date,
  orderno int,
  Iditm int FOREIGN KEY REFERENCES items(Iditm),
  amount int,
  Idsupp int FOREIGN KEY REFERENCES suppliers(Idsupp)
);

create table customers(
  Idcust int primary key,
  CustName varchar(20),
  Address money,
  tel int
);

create table outorder(
  Idout int primary key,
  orderdate date,
  Idcust int FOREIGN KEY REFERENCES customers(Idcust), /* we use (unique) to become one-to-one relationship  */
  orderno int,
  Iditm int FOREIGN KEY REFERENCES items(Iditm),
  amount int,
  price money
);