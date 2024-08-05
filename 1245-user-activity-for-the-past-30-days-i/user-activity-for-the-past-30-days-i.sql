# Write your MySQL query statement below

SELECT
    ACTIVITY_DATE AS DAY, 
    COUNT(DISTINCT USER_ID) AS ACTIVE_USERS

FROM
    ACTIVITY

WHERE
    DATEDIFF('2019-07-27', ACTIVITY_DATE) BETWEEN 0 AND 29
GROUP BY
    DAY;