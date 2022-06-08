use hozan
create table orders(
o_id tinyint,
orderDate date,
orderPrice smallint,
customer varchar(20)
);

insert into orders values(1,'2008/11/12',1000,'Hansen'); /* date ==> Y M D */
insert into orders values(2,'2008/10/23',1600,'Nilsen');
insert into orders values(3,'2008/09/02',700,'Hansen');
insert into orders values(4,'2008/09/03',300,'Hansen');
insert into orders values(5,'2008/08/30',2000,'Jensen');
insert into orders values(6,'2008/10/04',100,'Nilsen');

select * from orders;

select count(customer) as customerNilsen from orders where customer='Nilsen';

select count(*) as numberOfOrders from orders; /*it will count all rows*/

select count(distinct customer) as numberOfCustomers from orders;

drop table orders
go