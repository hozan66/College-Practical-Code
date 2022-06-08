use hozan2;
if object_id('customers','orders') is not null
drop table customers,orders

create table customers(     /*must have primary key here to link*/
id int not null primary key, 
name varchar(20) not null,
age int not null
);

create table orders(
o_id int not null,
mydate datetime,
custom_id int foreign key references customers(id),
amount money,
primary key(o_id)
);