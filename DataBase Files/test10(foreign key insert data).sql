use hozan3;
if object_id('person','orders') is not null
drop table person,orders

create table person(     /*must have primary key here to link*/
id int not null primary key, 
lastName varchar(50) not null,
firstName varchar(50),
age int
);

create table orders(
o_id int not null primary key,
orderNumber int not null,
person_id int foreign key references person(id)
);

insert into person values(1,'Hansen','ola',30);
insert into person values(2,'sevensen','tove',23);
insert into person values(3,'pettersen','kari',20);

insert into orders values(1,77895,3);
insert into orders values(2,44678,3);
insert into orders values(3,22456,2);
insert into orders values(4,24562,1);

select * from person;
select * from orders;