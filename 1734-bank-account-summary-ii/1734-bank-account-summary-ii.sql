SELECT
U.NAME, 
SUM(T.amount) AS BALANCE
FROM Users U
LEFT JOIN Transactions T
ON U.account=T.account
GROUP BY U.account,U.name
HAVING SUM(T.amount)>10000;
