# Write your MySQL query statement below
SELECT eu.unique_id,e.Name
FROM Employees e
LEFT JOIN EmployeeUNI eu
ON e.id=eu.id;