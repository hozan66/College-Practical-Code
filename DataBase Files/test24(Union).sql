use hozan10;

create table productA(
	aid int,
	aname nvarchar(50),
	price money
);

create table productB(
	bid int,
	bname nvarchar(50)
);

insert into productA values(1, 'Adjustable Race', 45.00);
insert into productA values(87, 'All-purpose Bike Stand', 235.00);
insert into productA values(712, 'AWS Logo Cap', 457.00);
insert into productA values(3, 'BB Ball Bearing', 124.00);
insert into productA values(2, 'Bearing Ball', 36.00);
insert into productA values(77, 'Bike Wash', 868.00);
insert into productA values(316, 'Blade', 123.00);
insert into productA values(843, 'Cable Lock', 435.00);
insert into productA values(92, 'Chaim', 68.00);
insert into productA values(324, 'Chain Stays', 234.00);

insert into productB values(1, 'Adjustable Race');
insert into productB values(23, 'All-purpose Bike Stand');
insert into productB values(712, 'AWS Logo Cap');
insert into productB values(3, 'BB Ball Bearing');
insert into productB values(2, 'Bearing Ball');
insert into productB values(877, 'Bike Wash');
insert into productB values(316, 'Blade');
insert into productB values(64, 'Cable Lock');
insert into productB values(952, 'Chaim');
insert into productB values(324, 'Chain Stays');

--select * from productA;
--select * from productB;

--select aid, aname from productA
--union
--select bid, bname from productB

--select bid, bname from productB
--union
--select aid, aname from productA

--select aid, aname from productA
--union all
--select bid, bname from productB


--select bid, bname from productB
--except
--select aid, aname from productA

--select aid, aname from productA
--intersect
--select bid, bname from productB

select aid,aname,'Only in productA' from productA
except
select bid,bname,'Only in productB' from productB
union all
select bid,bname,'Only in productB' from productB
except
select aid,aname,'Only in productA' from productA
union all
select bid,bname,'In both tables' from productB
intersect
select aid,aname,'In both tables' from productA


--1st

--aid         aname                                              
------------- -------------------------------------------------- ----------------
--1           Adjustable Race                                    Only in productA
--2           Bearing Ball                                       Only in productA
--3           BB Ball Bearing                                    Only in productA
--77          Bike Wash                                          Only in productA
--87          All-purpose Bike Stand                             Only in productA
--92          Chaim                                              Only in productA
--316         Blade                                              Only in productA
--324         Chain Stays                                        Only in productA
--712         AWS Logo Cap                                       Only in productA
--843         Cable Lock                                         Only in productA

--2nd

--aid         aname                                              
------------- -------------------------------------------------- ----------------
--1           Adjustable Race                                    Only in productA
--2           Bearing Ball                                       Only in productA
--3           BB Ball Bearing                                    Only in productA
--77          Bike Wash                                          Only in productA
--87          All-purpose Bike Stand                             Only in productA
--92          Chaim                                              Only in productA
--316         Blade                                              Only in productA
--324         Chain Stays                                        Only in productA
--712         AWS Logo Cap                                       Only in productA
--843         Cable Lock                                         Only in productA
--1           Adjustable Race                                    Only in productB
--23          All-purpose Bike Stand                             Only in productB
--712         AWS Logo Cap                                       Only in productB
--3           BB Ball Bearing                                    Only in productB
--2           Bearing Ball                                       Only in productB
--877         Bike Wash                                          Only in productB
--316         Blade                                              Only in productB
--64          Cable Lock                                         Only in productB
--952         Chaim                                              Only in productB
--324         Chain Stays                                        Only in productB

--3rd

--aid         aname                                              
------------- -------------------------------------------------- ----------------
--1           Adjustable Race                                    Only in productB
--2           Bearing Ball                                       Only in productB
--3           BB Ball Bearing                                    Only in productB
--23          All-purpose Bike Stand                             Only in productB
--64          Cable Lock                                         Only in productB
--316         Blade                                              Only in productB
--324         Chain Stays                                        Only in productB
--712         AWS Logo Cap                                       Only in productB
--877         Bike Wash                                          Only in productB
--952         Chaim                                              Only in productB

--4th

--aid         aname                                              
------------- -------------------------------------------------- ----------------
--1           Adjustable Race                                    Only in productB
--2           Bearing Ball                                       Only in productB
--3           BB Ball Bearing                                    Only in productB
--23          All-purpose Bike Stand                             Only in productB
--64          Cable Lock                                         Only in productB
--316         Blade                                              Only in productB
--324         Chain Stays                                        Only in productB
--712         AWS Logo Cap                                       Only in productB
--877         Bike Wash                                          Only in productB
--952         Chaim                                              Only in productB
--1           Adjustable Race                                    In both tables
--23          All-purpose Bike Stand                             In both tables
--712         AWS Logo Cap                                       In both tables
--3           BB Ball Bearing                                    In both tables
--2           Bearing Ball                                       In both tables
--877         Bike Wash                                          In both tables
--316         Blade                                              In both tables
--64          Cable Lock                                         In both tables
--952         Chaim                                              In both tables
--324         Chain Stays                                        In both tables


--aid         aname                                              
------------- -------------------------------------------------- ----------------
--1           Adjustable Race                                    Only in productB
--2           Bearing Ball                                       Only in productB
--3           BB Ball Bearing                                    Only in productB
--23          All-purpose Bike Stand                             Only in productB
--64          Cable Lock                                         Only in productB
--316         Blade                                              Only in productB
--324         Chain Stays                                        Only in productB
--712         AWS Logo Cap                                       Only in productB
--877         Bike Wash                                          Only in productB
--952         Chaim                                              Only in productB
--1           Adjustable Race                                    In both tables
--2           Bearing Ball                                       In both tables
--3           BB Ball Bearing                                    In both tables
--316         Blade                                              In both tables
--324         Chain Stays                                        In both tables
--712         AWS Logo Cap                                       In both tables


drop table productA;
drop table productB;