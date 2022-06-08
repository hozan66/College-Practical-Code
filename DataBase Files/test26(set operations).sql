use hozan10;

create table students(
stu_no int,
stu_name nvarchar(50),
major nvarchar(50),
class int
);

insert into students values(2,'Lineas','ENGL',1);
insert into students values(3,'Mary','COSC',4);
insert into students values(8,'Brenda','COSC',2);
insert into students values(10,'Richard','ENGL',1);
insert into students values(13,'Kelly','MATH',4);
insert into students values(14,'Lujack','COSC',1);
insert into students values(15,'Reva','MATH',2);
insert into students values(17,'Reva','COSC',1);
insert into students values(19,'Harley','WEB',2);
insert into students values(20,'Donald','ACCT',4);
insert into students values(24,'Chris','ACCT',4);
insert into students values(34,'Lynette','WEB',1);
insert into students values(49,'Susan','ENGL',3);
insert into students values(62,'Mary','MATH',3);
insert into students values(70,'Bill','WEB',null);
insert into students values(121,'Hillary','COSC',1);

create table Grade_Rep(
student_number int,
grade char(1)
);

insert into Grade_Rep values(2,'A');
insert into Grade_Rep values(3,'A');
insert into Grade_Rep values(8,'A');
insert into Grade_Rep values(10,'B');
insert into Grade_Rep values(13,'B');
insert into Grade_Rep values(14,'C');
insert into Grade_Rep values(15,'A');

--select stu_name from students
--where major='COSC';

--select stu_name from students
--where major='MATH';

--select stu_name from students
--where major='COSC'
--union
--select stu_name from students
--where major='MATH';

--select stu_name from students
--where major='COSC'
--union all
--select stu_name from students
--where major='MATH';

--select stu_name, class from students
--where class in (3,4);

--select stu_name, class from students
--where class=3 or class=4;

--select stu_name, class from students
--where class not in (3,4);

--select * from students;
--select * from Grade_Rep;

--select distinct (s.stu_name) 
--from students s
--where s.stu_no in
--(select distinct (g.student_number)
--from Grade_Rep g
--where g.grade='A');

--select s.stu_name
--from students s
--where s.stu_no in
--(select g.student_number
--from Grade_Rep g
--where g.grade='A');

select * from students;
select * from Grade_Rep;

--select s.stu_name, s.stu_no
--from students as s
--where s.stu_no in
--(select d.student_number
--from Grade_Rep as d);

--select stu_name, class from students
--where class in (1,3,4);

--select stu_name, class from students
--where class not in (2);

--select stu_name, major from students
--where major not in ('COSC','MATH');

select stu_name, class from students
where class in (2,3,4)
and not class in (2);

drop table students;
drop table Grade_Rep;