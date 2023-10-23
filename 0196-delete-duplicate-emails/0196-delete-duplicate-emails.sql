# Write your MySQL query statement below
# Select email as email
# from Person
# where email is not null
# delete count(email)>1;

delete p1
from person p1
join (
select email, Min(id) as min_id
from Person 
where email is not null
group by email
having count(email)>1
) p2
on p1.email = p2.email and p1.id>p2.min_id;
