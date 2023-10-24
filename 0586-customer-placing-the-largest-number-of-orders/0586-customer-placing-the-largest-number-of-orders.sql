# Write your MySQL query statement below
SELECT O.customer_number as customer_number
FROM Orders O
Group by customer_number
having count(customer_number) = (
    Select Max(cnt)
    from (
        Select customer_number,Count(*) as cnt
        from Orders
        Group by customer_number
        
    ) As T
);