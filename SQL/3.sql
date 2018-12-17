SELECT * FROM Sender WHERE SenderCity = 'Mumbai';
SELECT R.RecID, S.SenderName, S.SenderAddress, R.RecName, R.RecAddress FROM Recipient R, Sender S WHERE R.Sender_ID = S.Sender_ID;
SELECT * FROM Recipient ORDER BY RecName;
SELECT COUNT(RecCity), RecCity FROM Recipient GROUP BY RecCity;

SELECT DISTINCT SenderCity FROM Sender;
SELECT A.SenderName, B.RecName FROM Sender A, Recipient B WHERE A.Sender_ID = B.Sender_ID AND B.RecCity = ‘Mumbai’;
SELECT RecName, RecAddress FROM Recipient WHERE RecCity NOT IN(‘Mumbai’, ‘Kolkata’);
SELECT RecID, RecName FROM Recipient WHERE Sender_Id = ‘MU02’ OR Sender_ID = ‘ND50’;
