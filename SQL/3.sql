CREATE TABLE `recipient` (
  `RecID` varchar(6) DEFAULT NULL,
  `Sender_ID` varchar(6) DEFAULT NULL,
  `RecName` varchar(25) DEFAULT NULL,
  `RecAddress` varchar(25) DEFAULT NULL,
  `RecCity` varchar(15) DEFAULT NULL
);

INSERT INTO `recipient` VALUES
('KO05','ND01','R Bajpayee','5, Central Avenue','Kolkata'),
('ND08','MU02','S Mahajan','116, A Vihar','New Delhi'),
('MU19','ND01','H Singh','2A, Andheri East','Mumbai'),
('MU32','MU15','P K Swamy','B5, C S Terminus','Mumbai'),
('ND48','ND50','S Tripathi','13, B1 D, Mayur Vihar','New Delhi');

CREATE TABLE `sender` (
  `Sender_ID` varchar(6) DEFAULT NULL,
  `SenderName` varchar(15) DEFAULT NULL,
  `SenderAddress` varchar(25) DEFAULT NULL,
  `SenderCity` varchar(15) DEFAULT NULL
);

INSERT INTO `sender` VALUES
('ND01','R Jain','2, ABC Appts','New Delhi'),
('MU02','H Sinha','12, Newtown','Mumbai'),
('MU15','S Jha','27/A, Park Street','Mumbai'),
('ND50','T Prasad','122-K, SDA','New Delhi');

SELECT * FROM Sender WHERE SenderCity = 'Mumbai';
SELECT R.RecID, S.SenderName, S.SenderAddress, R.RecName, R.RecAddress FROM Recipient R, Sender S WHERE R.Sender_ID = S.Sender_ID;
SELECT * FROM Recipient ORDER BY RecName;
SELECT COUNT(RecCity), RecCity FROM Recipient GROUP BY RecCity;

SELECT DISTINCT SenderCity FROM Sender;
SELECT A.SenderName, B.RecName FROM Sender A, Recipient B WHERE A.Sender_ID = B.Sender_ID AND B.RecCity = ‘Mumbai’;
SELECT RecName, RecAddress FROM Recipient WHERE RecCity NOT IN(‘Mumbai’, ‘Kolkata’);
SELECT RecID, RecName FROM Recipient WHERE Sender_Id = ‘MU02’ OR Sender_ID = ‘ND50’;
