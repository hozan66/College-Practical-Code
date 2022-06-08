use hozan

/*unique constraint on  multiple columns*/
create table persons(
id int not null,
name varchar(25) not null,
addres nvarchar(250),
city varchar(30),
constraint un_PersonID unique(id,name)  /*(un_PersonID) name of constraint*/
);

/*check constraint on multiple columns*/
create table pp(
id int not null,
name varchar(25) not null,
addres nvarchar(250),
city varchar(30),
constraint uc_PersonID check(id>0 and city='Amesterdam') 
);

/*primary key constraint on multiple columns*/
create table pt(
id int not null,
name varchar(25) not null,
addres nvarchar(250),
city varchar(30),
constraint pk_PersonID primary key(id,name) 
);
/*Note: there is only one primary key (pk_PersonID).
however, the value of the pk_PersonID is made up of two columns (id and name)
*/