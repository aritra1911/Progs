CREATE TABLE `customer` (
  `C_ID` int(4) DEFAULT NULL,
  `CustomerName` varchar(25) DEFAULT NULL,
  `City` varchar(15) DEFAULT NULL,
  `I_ID` varchar(6) DEFAULT NULL
);

INSERT INTO `customer` VALUES
(1,'N Roy','Delhi','LC03'),
(6,'H Singh','Mumbai','PC03'),
(12,'R Pandey','Delhi','PC06'),
(15,'C Sharma','Delhi','LC03'),
(16,'K Agarwal','Bangalore','PC01');

CREATE TABLE `item` (
  `I_ID` varchar(6) DEFAULT NULL,
  `ItemName` varchar(25) DEFAULT NULL,
  `Manufacturer` varchar(6) DEFAULT NULL,
  `Price` int(6) DEFAULT NULL
);

INSERT INTO `item` VALUES
('PC01','Personal Computers','ABC',35000),
('LC05','Laptop','ABC',55000),
('PC03','Personal Computers','XYZ',32000),
('PC06','Personal Computers','COMP',37000),
('LC03','Laptop','PQR',57000);

SELECT * FROM Customer WHERE City = 'Delhi';
SELECT * FROM Item WHERE Price BETWEEN 35000 AND 55000;
SELECT C.CustomerName, C.City, I.ItemName, I.Price FROM Customer C, Item I WHERE C.I_ID = I.I_ID;
UPDATE Item SET Price = Price + 1000;

SELECT DISTINCT City FROM Customer;
SELECT ItemName, MAX(Price), COUNT(*) FROM Item GROUP BY ItemName;
SELECT CustomerName, Manufacturer FROM Item, Customer WHERE Item.I_ID = Customer.I_ID;
SELECT ItemName, Price * 100 FROM Item WHERE Manufacturer = ‘ABC’;
