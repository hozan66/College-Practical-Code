use hozan6;
/* many-to-many relationship */

drop table student_subject
drop table subjects
drop table student


create table student(
s_id int primary key,
s_name varchar(50) not null,
s_age int 
);

create table subjects(
sub_id int primary key,
sub_name varchar(50) not null
);

create table student_subject(
stud_id int foreign key references student(s_id),
subj_id int foreign key references subjects(sub_id)
);

insert into student values(1,'Ali',20),(2,'nor',17),(3,'hamr',37),(4,'gkok',22);

insert into subjects values(1,'math'),(2,'python'),(3,'science'),(4,'logic');

insert into student_subject values(1,1);
insert into student_subject values(5,4);
insert into student_subject values(2,2);
insert into student_subject values(3,3);

select * from student;
select * from subjects;
select * from student_subject;