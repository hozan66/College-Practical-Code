use hozan10;

create table department(
department_id int primary key,
department_name varchar(30)
);

 insert into department values(31,'sales');
 insert into department values(33,'engineering');
 insert into department values(34,'clerical');
 insert into department values(35,'marketing');

 select * from department;

 create table Employee(
 last_name varchar(30),
 department_id int foreign key references department(department_id)
 );

 insert into Employee values('rafferty',31);
 insert into Employee values('jones',33);
 insert into Employee values('stienberg',33);
 insert into Employee values('robinson',34);
 insert into Employee values('Smith',34);
 insert into Employee values('john',NULL);

 select * from Employee;

 --select * from Employee inner join department
 --on Employee.department_id=department.department_id;

  select * from Employee e inner join department d
 on e.department_id=d.department_id;

 --  select * from department d left outer join Employee e
 --on e.department_id=d.department_id;

    select * from Employee e left outer join department d
 on e.department_id=d.department_id;

select * from Employee e right outer join department d
 on e.department_id=d.department_id;

select * from Employee e full outer join department d
 on e.department_id=d.department_id;

select * from Employee e full outer join department d
 on e.department_id=d.department_id
 where e.department_id is null or d.department_id is null;         --Not Inner Join

 select * from Employee cross join department;

  select * from Employee e inner join department d
 on e.department_id=d.department_id;

  select * from Employee e join department d                      --self join
  on e.department_id=d.department_id;

drop table Employee;
drop table department;
  

