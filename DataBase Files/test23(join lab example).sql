use hozan11;

create table employee(
emp_Name nvarchar(50) primary key,
street nvarchar(50),
city nvarchar(50)
);

insert into employee values('hozan','street100','Hawler');
insert into employee values('ali','street40','Dhuk');
insert into employee values('raman','street60','sulimani');

select * from employee;

create table company(
com_Name nvarchar(50) primary key,
city nvarchar(50)
);

insert into company values('dwrandaz','english village');
insert into company values('techeye','Hawler');
insert into company values('fastlink','lobnan village');

select * from company;

create table works(
emp_Name nvarchar(50) foreign key references employee(emp_Name),
com_Name nvarchar(50) foreign key references company(com_Name),
salary money
);

insert into works values('hozan','dwrandaz',15000);
insert into works values('ali','techeye',8000);
insert into works values('raman','fastlink',16000);

select * from works;

create table managers(
emp_Name nvarchar(50) foreign key references employee(emp_Name),
mang_Name nvarchar(50)
);

insert into managers values('hozan','sardar');
insert into managers values('ali','yusef');
insert into managers values('raman','sban');

select * from managers;

select * from employee;
select * from works;
select * from employee e join works w
on e.emp_Name=w.emp_Name
where salary > 10000 and com_Name='dwrandaz';

/* 
Q1) Find the names,street,cities for all employee 
who work for 1st bank corporation and has more then $10000 ??
*/
select e.emp_Name,e.street,e.city from employee e join works w
on e.emp_Name=w.emp_Name
where salary > 10000 and com_Name='dwrandaz';

select * from employee;
select * from company;
select * from works;
select * from employee e join works w
on e.emp_Name=w.emp_Name
join company c
on w.com_Name=c.com_Name or w.com_Name<>c.com_Name
where e.city=c.city;

/* 
Q2) Find the name of all employee 
who live in the same cities of company who works for each they work ??
*/
select e.emp_Name from employee e join works w
on e.emp_Name=w.emp_Name
join company c
on w.com_Name=c.com_Name or w.com_Name<>c.com_Name
where e.city=c.city;

drop table managers;
drop table works;
drop table company;
drop table employee;