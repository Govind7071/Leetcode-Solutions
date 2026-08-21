-- Last updated: 22/08/2026, 01:18:39
# Write your MySQL query statement below
select
  c.name as Customers
  from Customers as c
  left join Orders as o
  on c.id = o.customerId
  where o.customerId is null