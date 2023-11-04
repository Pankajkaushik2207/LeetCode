# Write your MySQL query statement below
Select distinct V.author_id as id
from Views V
where V.author_id=V.viewer_id
order by id asc;