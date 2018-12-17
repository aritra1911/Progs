SELECT * FROM Worker ORDER BY DOB DESC;
SELECT NAME, DESIG FROM Worker WHERE PLEVEL IN ('P001', 'P002');
SELECT * FROM Worker WHERE DOB BETWEEN '1984-01-19' AND '1987-01-18';
INSERT INTO Worker VALUES (19, 'Daya Kishore', 'Operator', 'P003', '2008-06-19', '1984-07-11');

SELECT COUNT(PLEVEL), PLEVEL FROM WORKER GROUP BY PLEVEL;
SELECT MAX(DOB), MIN(DOJ) FROM WORKER;
SELECT Name, Pay FROM WORKER W, PAYLEVEL P WHERE W.PLEVEL = P.PLEVEL AND W.ECODE < 13;
SELECT PLEVEL, PAY + ALLOWANCE FROM PAYLEVEL WHERE PLEVEL=‘P003’;
