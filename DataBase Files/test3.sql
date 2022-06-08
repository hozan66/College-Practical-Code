USE hozan

Select getdate() /*return date and time without using FROM instruction*/

Select col1=100,col2=200

Select 'A','B'

Select 4+3,4-3,4*3,4/3

create table Ddependent(
pno smallint not null,   --null by default
dName nvarchar(20) null,
relationship nvarchar(8) null,
sex char(1) null,
age smallint null
)
go

insert into Ddependent values(12,'ali','son','M',2);
insert into Ddependent values(60,'shi','daughter','F',20);
insert into Ddependent values(13,'hoz','son','M',8);
insert into Ddependent values(20,'hrhfd','daughter','F',4);
insert into Ddependent values(15,'nor','son','M',7);
go

select * from Ddependent
go

select dName from Ddependent
go

select dName,relationship from Ddependent
go

select * from Ddependent
go

select dName, age from Ddependent order by age
go

select dName, age from Ddependent order by sex /*here ordered by sex without diplaying sex column*/
go

select dName, age,sex from Ddependent order by sex
go

select dName, age from Ddependent order by age desc
go

select dName,sex,age from Ddependent order by sex,age desc
go

select dName,sex,age from Ddependent order by sex desc,age desc
go

select * from Ddependent where sex='F'
go

select dName,age from Ddependent where age<=5 order by age /*it must be (where) before (order by)*/
go

select * from Ddependent where age<=5 and sex='F'
go

select dName,age from Ddependent where age between 5 and 8
go

select dName,age from Ddependent where age>=5 and age<=8
go

select dName,age from Ddependent where age not between 5 and 8
go

drop table Ddependent /*we must use (put) all data before (DROP TABLE) instruction*/
go
