use hozan10;

create table subjectt(
subject_id int primary key,
subject_name varchar(50)
);

insert into subjectt values(1,'MySQL');
insert into subjectt values(2,'Computers');

select * from subjectt;

create table author(
author_id int primary key,
last_name varchar(50),
first_name varchar(50)
);

insert into author values(1,'Silberschatz','Abraham');
insert into author values(2,'Korth','Henry');

select * from author;

create table publisher(
publisher_id int primary key,
publisher_name varchar(50)
);

insert into publisher values(1,'McGraw-Hill');

select * from publisher;

create table book(
ISBN int primary key,
title varchar(50),
pages int,
publisher_id int foreign key references publisher(publisher_id)
);

insert into book values(0072958863,'Database System Concepts',1168,1);
insert into book values(0471694665,'Database System Concepts',944,1);

select * from book;

create table book_subject(
ISBN int foreign key references book(ISBN),
subject_id int foreign key references subjectt(subject_id),
);

insert into book_subject values(0072958863,1);
insert into book_subject values(0072958863,2);
insert into book_subject values(0471694665,2);

select * from book_subject;


create table book_author(
ISBN int foreign key references book(ISBN),
author_id int foreign key references author(author_id),
);

insert into book_author values(0072958863,1);
insert into book_author values(0072958863,2);
insert into book_author values(0471694665,1);
insert into book_author values(0471694665,2);

select * from book_author;

drop table book_author;
drop table book_subject;
drop table book;
drop table publisher;
drop table author;
drop table subjectt;
