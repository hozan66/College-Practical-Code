use hozan8;
--Consider the following relation schema and briefly answer the questions that follow:

--Dept(did: integer, budget: real, managerid: integer)
--Stu(Stid: integer, Stname: string, age: integer, Mark: real)
--subject(Stid: integer, did: integer, pcttime: integer)

--1. Draw an ER-Diagram by SQL server on all tables above.
--2. Define a table constraint on Stu that will check the Marks that every student get at least 50%
--3. Update the Mark from Stu (Ali,Ahmed)

--Note: copy the sql code & ER Diagram & output on word.doc by your name

drop table subjects;
drop table student;
drop table department;

create table department(
did int not null primary key,
budget real,
managerid int
);

insert into department values(1,200,600);
insert into department values(2,150,650);
insert into department values(3,100,550);

select * from department;

create table student(
stid int not null primary key,
stname varchar(30),
age int,
mark real check (mark>=50),
dep_id int foreign key references department(did)
);

insert into student values(11,'hozan',21,98,1);
insert into student values(12,'olo',15,56,2);
insert into student values(13,'joko',20,80,3);

select * from student;

create table subjects(
did int not null primary key,
pcttime int,
st_id int foreign key references student(stid)
);

insert into subjects values(111,8,11);
insert into subjects values(112,10,12);
insert into subjects values(113,7,13);

select * from subjects;

update student
set mark=50 from student where stname='olo'or stname='joko';

select * from student;

