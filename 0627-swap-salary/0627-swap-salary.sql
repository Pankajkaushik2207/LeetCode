# Write your MySQL query statement below
Update Salary
Set Sex = Case
when sex='f' then 'm'
when sex='m' then 'f'
else sex
end;