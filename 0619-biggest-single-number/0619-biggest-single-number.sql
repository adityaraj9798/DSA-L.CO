SELECT MAX(num) AS num
FROM(
SELECT
num
FROM MyNumbers
GROUP BY num
having count(num)=1
)AS unique_numbers;