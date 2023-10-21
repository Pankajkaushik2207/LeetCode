# Write your MySQL query statement below
# select num  as consecutiveNums
# from Logs
# Group by num
# having count(num)>=3;
# SELECT num AS consecutiveNums
# FROM (
#   SELECT num,
#          LEAD(num) OVER (ORDER BY id) AS next_num,
#          LAG(num) OVER (ORDER BY id) AS prev_num
#   FROM Logs
# ) subquery
# WHERE num = next_num AND num = prev_num;

# SELECT num AS ConsecutiveNums
# FROM (
#   SELECT num,
#     ROW_NUMBER() OVER (ORDER BY id) AS row_num
#   FROM Logs
# ) subquery
# having COUNT(*) OVER () > 1;


SELECT distinct 
    i1.num as ConsecutiveNums 
FROM 
    logs i1,
    logs i2,
    logs i3
WHERE 
    i1.id=i2.id+1 AND 
    i2.id=i3.id+1 AND 
    i1.num=i2.num AND 
    i2.num=i3.num