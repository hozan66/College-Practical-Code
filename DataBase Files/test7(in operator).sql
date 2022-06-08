use hozan2

create table submits(
id int,
name varchar(100),
age int
);

insert into submits values(1,'hozan',20);
insert into submits values(2,'ali',24);
insert into submits values(3,'shi',10);
insert into submits values(4,'ram',29);
insert into submits values(5,'andi',30);
insert into submits values(6,'nor',44);
insert into submits values(7,'ham',35);

select * from submits where age in(10,20,30);