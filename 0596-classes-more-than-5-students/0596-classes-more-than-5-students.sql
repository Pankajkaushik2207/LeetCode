# Write your MySQL query statement below
Select C.class as class
from Courses C
group by C.class
having count(C.class)>=5;