# Write your MySQL query statement below
Select D.name as Department , E.name as Employee, E.salary
from  Employee E
join Department D On E.departmentId = D.Id
Where (E.departmentId, E.salary) in
(Select departmentId, MAX(salary) from Employee GROUP by departmentID);

