# Write your MySQL query statement below
SELECT 
    E.NAME, B.BONUS
FROM
    EMPLOYEE E
LEFT JOIN
    BONUS B
ON
    B.empId = E.empId
HAVING
    B.BONUS < 1000 OR B.BONUS IS NULL;
