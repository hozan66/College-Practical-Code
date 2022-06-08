use hozan9;
--Consider the following relation schema and briefly answer the questions that follow:

--Emp(eid: integer, ename: string, age: integer, salary: real)
--Works(eid: integer, did: integer, pcttime: integer)
--Dept(did: integer, budget: real, managerid: integer)

--1. Draw an ER-Diagram by SQL server on all tables above.
--2. Define a table constraint on Emp that will check that every employee get at least $10,000
--3. Update the salary from EMP (Ali,Ahmed)

--Note: copy the sql code & ER Diagram & output on word.doc by your name


drop table Workers;
drop table Dept;
drop table Emp;

create table Emp(
eid int primary key not null,
ename varchar(20),
age int,
salary real
check (salary>=10000)
);

create table Dept( 
did int primary key  not null,
budget real,
managerid int 
);

create table Workers(
eid int foreign key references Emp(eid),
did int foreign key references Dept(did),
pct_time int
);

insert into Emp values(1,'ali',44,13000);
insert into Emp values(2,'ahmed',41,10000);
insert into Emp values(3,'omer',40,12000);
insert into Emp values(4,'kawa',42,19700);

select * from Emp;

insert into Dept values(1,3300,1);
insert into Dept values(2,3300,1);
insert into Dept values(3,3300,1);
insert into Dept values(4,3300,1);

select * from Dept;


insert into Workers values(1,1,600);
insert into Workers values(2,2,1200);
insert into Workers values(3,3,2000);
insert into Workers values(4,4,1700);

select * from Workers;

update Emp set salary=70000 where ename='ahmed';

update Emp set salary=90000 where ename='ali';

select * from Emp;
