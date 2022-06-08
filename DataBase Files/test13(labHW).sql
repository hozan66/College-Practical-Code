use hozan5;

drop table grade_report;
drop table section;
drop table course;
drop table room;
drop table dependant;
drop table student;
drop table department;

create table department(
	d_code int NOT NULL PRIMARY KEY,
	d_name varchar(50) NOT NULL
);

create table room(
	r_id int NOT NULL PRIMARY KEY,
	r_name varchar(50) NOT NULL,
	capacity int NOT NULL
);

create table student(
	stu_number int NOT NULL PRIMARY KEY,
	stu_name varchar(50) NOT NULL,
	department_code int FOREIGN KEY REFERENCES department(d_code),
	stu_age int NOT NULL,
	bdate date NOT NULL
);

create table dependant(
	d_name varchar(20) NOT NULL PRIMARY KEy,
	stu_NO int foreign key references student(stu_number),
	relationship varchar(50) NOT NULL,
	sex bit NOT NULL,
	age int NOT NULL
);

create table course(
	c_number int NOT NULL PRIMARY KEY,
	c_name varchar(50) NOT NULL,
	credit_hours int NOT NULL,
	student_NO int foreign key references student(stu_number),
	room_NO int foreign key references room(r_id)
);

create table section(
	sec_id int NOT NULL PRIMARY KEY,
	course_number int FOREIGN KEY REFERENCES course(c_number),
	semester int NOT NULL,
	years date not null,
	instructor varchar(50) NOT NULL,
	room_id int FOREIGN KEY REFERENCES room(r_id),
	romm_name varchar(50) NOT NULL
);

create table grade_report(
	studentnumber int FOREIGN KEY REFERENCES student(stu_number),
	sectionid int FOREIGN KEY REFERENCES section(sec_id),
	grade int NOT NULL,
	stno int NOT NULL
);


