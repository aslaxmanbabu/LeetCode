# Write your MySQL query statement below
SELECT W.name, W.population, W.area
FROM World W
WHERE W.population >=25000000 OR W.area >= 3000000;