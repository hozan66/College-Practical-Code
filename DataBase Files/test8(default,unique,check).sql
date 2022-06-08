use hozan

create table client(
id int not null,
age int default 18
);

insert into client(id,age) values(1,20);
insert into client(id) values(2);

select * from client;

create table class_u(
id int not null,
name varchar(10) not null,
age int not null unique
);

create table class_c(
id int primary key,
name varchar(19) ,
age int check (age>=18)
);

insert into class_c values(1,'sara',20);
insert into class_c values(2,'vasd',12); /*error must age>=18*/

select * from class_c;