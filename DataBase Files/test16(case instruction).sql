use hozan8;

drop table job;
drop table student2;

create table job(
id int,
name varchar(20),
salary money
);

insert into job values
(1,'hozan',300),
(2,'nor',450),
(3,'ali',250),
(4,'hamdin',400);

select * from job;

--this is simple case
select name, case name  --or just we can write case
	when 'hozan' then salary*3
	when 'ali' then salary*2
	else salary --same value no change
end
'new salary' --name of new column
from job;

--nnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn

create table student2(
id int,
fname varchar(20),
lname varchar(20),
mark int,
department char(10)
);

insert into student2 values
(322,'hozan','ageed',92,'CS'),
(223,'hamdin','nazir',55,'M'),
(527,'ali','abbas',81,'CS'),
(720,'nor','husen',62,'S'),
(811,'rangin','fesal',45,'AC'),
(912,'hana','rashed',73,'S');

select * from student2;

select fname,lname,mark, case
	when mark>=50 and mark<60 then 'accept'
	when mark>=60 and mark<70 then 'medium'
	when mark>=70 and mark<80 then 'good'
	when mark>=80 and mark<90 then 'very good'
	when mark>=90 and mark<=100 then 'excellent'
	else 'failed'
end
'result' 
from student2; 

select fname,mark, 
result2=
	case
		when mark<50 then 'F'
		when mark<60 then 'C'
		when mark<80 then 'B'
		else 'A'
	end
from student2; 

