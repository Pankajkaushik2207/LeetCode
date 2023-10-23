# Write your MySQL query statement below
SELECT D.name AS Department, E.name AS Employee, E.salary AS Salary
FROM Employee E
JOIN Department D ON E.departmentId = D.id
WHERE (
    SELECT COUNT(DISTINCT E1.salary)
    FROM Employee E1
    WHERE E1.departmentId = E.departmentId
      AND E1.salary >= E.salary
) <= 3
ORDER BY D.name, E.salary DESC;
