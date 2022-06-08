use hozan11;

create table people(
id int,
firstname varchar(20),
lastname varchar(20),
statecode varchar(2),
alive bit,
height int);

insert into people values(1,'Paul','Revere','AL',0,74);
insert into people values(2,'John','Lennon','NY',0,69);
insert into people values(3,'peter','Martin','GA',1,75);
insert into people values(4,'George','Washington','MA',0,75);

select * from people;

select firstname + ' ' + lastname as 'full name', height as 'Height Inches',
state_code=
case statecode
	when 'Al' then 'Alabania'
	when 'NY' then 'New York'
	when 'GA' then 'Georgioa'
	else 'Unknown'
end,
living=
	case 
		when alive=1 then 'Living'
		else 'Dead'
	end
from people;
go

select 'Example #1' as Example, firstname, lastname, height from people
where height >= all(select height from people); --it brings maximum height
go

select 'Example #2' as Example, firstname, lastname, height from people
where height < any(select height from people); --it brings all rows that are not maximum height
go

select 'Example #3' as Example, firstname, lastname, height from people
where height between 74 and 75;
go

select 'Example #4' as Example, firstname, lastname, statecode from people
where firstname like 'P[ae]%';
go

drop table people;
go

