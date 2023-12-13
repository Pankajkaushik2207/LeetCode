# Write your MySQL query statement below
select A.sell_date as sell_date,count(distinct product) as num_sold, GROUP_CONCAT(DISTINCT A.product ORDER BY A.product) AS products
from Activities A
group by A.sell_date
order by A.sell_date;


# SELECT
#     sell_date,
#     COUNT(DISTINCT product) AS num_sold,
#     GROUP_CONCAT(DISTINCT product ORDER BY product) AS products
# FROM
#     Activities
# GROUP BY
#     sell_date
# ORDER BY
#     sell_date;
