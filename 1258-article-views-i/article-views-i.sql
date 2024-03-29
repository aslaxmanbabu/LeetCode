# Write your MySQL query statement below
SELECT author_id as id
FROM Views V
WHERE V.author_id = V.viewer_id
GROUP BY V.author_id
ORDER BY V.author_id ASC;