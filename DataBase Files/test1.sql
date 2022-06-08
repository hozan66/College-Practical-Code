USE	hozan

CREATE TABLE people
(
ID int,
FirstName varchar(20),
LastName varchar(20),
StateCode varchar(2),
alive bit,
height int
)
Go --To execute all statements before Go instruction

INSERT INTO people VALUES(1,'paul','Revere','Al',0,74)
INSERT INTO people VALUES(2,'Hoz','ag','sy',1,79)
INSERT INTO people VALUES(3,'Shi','fa','ql',1,77)
Go

SELECT * FROM people
Go

DROP TABLE people
Go
