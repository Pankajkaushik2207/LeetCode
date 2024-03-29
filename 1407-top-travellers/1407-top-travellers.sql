# Write your MySQL query statement below
SELECT a.name,CASE WHEN b.user_id IS NULL THEN 0 ELSE SUM(distance) END as travelled_distance FROM Users as a
LEFT JOIN Rides as b
ON a.id=b.user_id
GROUP BY a.id
ORDER BY travelled_distance DESC,name ASC;
