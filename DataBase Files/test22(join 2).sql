use hozan11;

create table student(
stu_id int primary key,
name varchar(30),
tel int,
DoB date
);

insert into student values(1,'Osama',0750,'2000/2/20');
insert into student values(2,'Ali',0751,'1998/5/19');
insert into student values(3,'Hozan',0782,'1999/11/25');

select * from student;

create table department(
dept_id int primary key,
name varchar(30),
stu_id int foreign key references student(stu_id)
);

insert into department values(11,'IT',1);
insert into department values(12,'Math',2);
insert into department values(13,'CS',3);

select * from department;

create table class(
class_id int primary key,
name varchar(30),
dept_id int foreign key references department(dept_id)
);

insert into class values(21,'class20',11);
insert into class values(22,'class30',12);
insert into class values(23,'class40',13);

select * from class;

create table hall(
hall_id int primary key,
hall_name varchar(30)
);

insert into hall values(31,'hall20');
insert into hall values(32,'hall30');
insert into hall values(33,'hall40');

select * from hall;

create table subjectt(
sub_id int primary key,
name varchar(30),
class_id int foreign key references class(class_id),
hall_id int foreign key references hall(hall_id)
);

insert into subjectt values(41,'C++',21,31);
insert into subjectt values(42,'Python',22,32);
insert into subjectt values(43,'dart',23,33);

select * from subjectt;

create table mark(
mark_id int primary key,
marks int,
sub_id int foreign key references subjectt(sub_id)
);

insert into mark values(51,88,41);
insert into mark values(52,77,42);
insert into mark values(53,99,43);

select * from mark;

select * from student;
select * from department;

SELECT * FROM student s
inner join department d
on s.stu_id= d.stu_id
inner join class c
on d.dept_id=c.dept_id
inner join subjectt ss
on c.class_id=ss.class_id
inner join mark m
on ss.sub_id=m.sub_id
inner join hall h
on ss.hall_id=h.hall_id;

drop table mark;
drop table subjectt;
drop table hall;
drop table class;
drop table department;
drop table student;