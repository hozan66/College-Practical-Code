USE	hozan

CREATE TABLE orders
(
orderID int,
orderDate date not null, --it must not be empty
subTotal money not null,
taxMount money not null,
shippingAmount money not null,
GrandTotal As(subTotal+taxMount+shippingAmount),
FinalShipment date null
)
Go --To execute the statement before Go instruction

INSERT INTO orders VALUES(1,'5/5/2019',80,20,100,'5/5/2019')
INSERT INTO orders VALUES(2,'5/9/2019',90,40,120,'5/5/2020')
INSERT INTO orders VALUES(3,'5/12/2019',70,50,110,'5/5/2021')
Go

SELECT * FROM orders
Go

DROP TABLE orders
Go
