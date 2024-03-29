# Write your MySQL query statement below
SELECT p.product_id
FROM Products P
WHERE P.low_fats = 'Y' and P.recyclable = 'Y';