SELECT * FROM Store ORDER BY LastBuy;
SELECT ItemNo, Item FROM Store WHERE Rate > 15;
SELECT ItemNo, Item FROM Store WHERE Scode = 22 OR Qty > 110;
SELECT MIN(Rate), Scode FROM STORE GROUP BY Scode;

SELECT COUNT(DISTINCT Scode) FROM Store;
SELECT Rate*Qty FROM Store WHERE ItemNo = 2004;
SELECT Item, Sname FROM Store S, Suppliers P WHERE S.Scode = P.Scode AND ItemNo = 2006;
SELECT MAX(LastBuy) FROM Store;
