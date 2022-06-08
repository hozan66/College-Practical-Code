use hozan
create table persons(
p_id tinyint,
lastName varchar(20),
firstName varchar(20),
_address varchar(20),
city varchar(20)
);

insert into persons values(1,'Hansen','Ola','Timoteivn 10','Sandnes');
insert into persons values(2,'Svendson','Tove','Borgvn 23','Sandnes');
insert into persons values(3,'Pettersen','Kari','Storgt 20','Stavanger');

select * from persons;

select lastName,firstName from persons;

select distinct city from persons;

select * from persons where lastName='Svendson' and (firstName='Tove' or firstName='Ola'); 

insert into persons values(4,'Nilsen','Johan','Bakken 2','Stavanger');
select * from persons;

insert into persons(p_id,lastName,firstName) values(5,'Tjessem','Jakob');
select * from persons;

update persons
set _address='Nissestien 67',city='Sandnes' from persons
where lastName='Tjessem' and firstName='Jakob';
select * from persons;

delete from persons
where lastName='Tjessem' and firstName='Jakob';
select * from persons;

select top 2 * from persons;

select top 50 percent * from persons;

select * from persons where city like 's%'; /* % wildcard means complement of string*/

select * from persons where city like '%s';

select * from persons where city like '%tav%';

select * from persons where city not like '%tav%';

select * from persons where city like 'sa%';

select * from persons where city like '%nes%';

select * from persons where firstName like '_la%';  /*(_) means any char*/

select * from persons where lastName like 's_end_on';

select * from persons where lastName like '[bsp]%';

select * from persons where lastName like '[^bsp]%';

drop table persons
go