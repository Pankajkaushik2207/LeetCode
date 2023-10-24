# Write your MySQL query statement below
Select C.name as name
from Customer C
where C.referee_id!=2 or C.referee_id is null;