use hozan

create table employee(
ID int,
name nvarchar(20),
salary int,
startt_date datetime,
city nvarchar(20),
region char(10)
)
go

insert into employee (ID,name,salary,startt_date,city,region) 
values (1,'Jason',40420,'02/01/94','New York','W');
insert into employee (ID,name,salary,startt_date,city,region) 
values (2,'Robelt',14420,'02/01/95','Vancouver','N');
insert into employee (ID,name,salary,startt_date,city,region) 
values (3,'Celia',24020,'03/12/96','Toronto','W');
insert into employee (ID,name,salary,startt_date,city,region) 
values (4,'Linda',40620,'04/11/97','New York','N');

select * from employee
go
--simple view
create view myView
as select name, salary from employee
go
select * from myView
go



drop table employee
