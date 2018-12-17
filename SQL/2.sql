SELECT * FROM Customer WHERE City = 'Delhi';
SELECT * FROM Item WHERE Price BETWEEN 35000 AND 55000;
SELECT C.CustomerName, C.City, I.ItemName, I.Price FROM Customer C, Item I WHERE C.I_ID = I.I_ID;
UPDATE Item SET Price = Price + 1000;

SELECT DISTINCT City FROM Customer;
SELECT ItemName, MAX(Price), COUNT(*) FROM Item GROUP BY ItemName;
SELECT CustomerName, Manufacturer FROM Item, Customer WHERE Item.I_ID = Customer.I_ID;
SELECT ItemName, Price * 100 FROM Item WHERE Manufacturer = ‘ABC’;
