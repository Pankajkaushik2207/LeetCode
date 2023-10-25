# Write your MySQL query statement below
Select W.name as name,W.population as population, W.area as area
from World W
where W.area >=3000000 or W.population>=25000000;