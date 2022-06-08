create database hozan1;
use hozan1;

create table test(
id int identity(1,1), --identity(start,step) id will increase automatically
name varchar(16)
);

insert into test values('hoza');
insert into test values('ham');
insert into test values('ali');

select * from test;

create table test2(
id int identity(2,5), --identity(start,step) id will increase automatically
age int unique
);

insert into test2 values(20);
insert into test2 values(15);
insert into test2 values(25);
insert into test2 values(22);

select * from test2;