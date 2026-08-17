-- Last updated: 18/08/2026, 01:10:02
# Write your MySQL query statement below
select
email as Email
from Person
group by email
having count(*) >1