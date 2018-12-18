CREATE TABLE `store` (
  `ItemNo` int(4) DEFAULT NULL,
  `Item` varchar(25) DEFAULT NULL,
  `Scode` int(2) DEFAULT NULL,
  `Qty` int(4) DEFAULT NULL,
  `Rate` int(2) DEFAULT NULL,
  `LastBuy` date DEFAULT NULL
);

INSERT INTO `store` VALUES
(2005,'Pharpener Classic',23,60,8,'2009-06-30'),
(2003,'Ball Pen 0.25',22,50,25,'2010-02-01'),
(2002,'Gel Pen Premium',21,150,12,'2010-02-24'),
(2006,'Gel Pen Classic',21,250,20,'2009-03-11'),
(2001,'Eraser Small',22,220,6,'2009-01-19'),
(2004,'Eraser Big',22,110,8,'2009-12-02'),
(2009,'Ball Pen 0.5',21,180,18,'2009-11-03');

CREATE TABLE `suppliers` (
  `Scode` int(2) DEFAULT NULL,
  `Sname` varchar(25) DEFAULT NULL
);

INSERT INTO `suppliers` VALUES
(21,'Premium Stationers'),
(23,'Soft Plastics'),
(22,'Tetra Supply');

SELECT * FROM Store ORDER BY LastBuy;
SELECT ItemNo, Item FROM Store WHERE Rate > 15;
SELECT ItemNo, Item FROM Store WHERE Scode = 22 OR Qty > 110;
SELECT MIN(Rate), Scode FROM STORE GROUP BY Scode;

SELECT COUNT(DISTINCT Scode) FROM Store;
SELECT Rate*Qty FROM Store WHERE ItemNo = 2004;
SELECT Item, Sname FROM Store S, Suppliers P WHERE S.Scode = P.Scode AND ItemNo = 2006;
SELECT MAX(LastBuy) FROM Store;
