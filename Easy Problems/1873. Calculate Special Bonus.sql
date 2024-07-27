-- https://leetcode.com/problems/calculate-special-bonus/

-- select employee ids
-- use case to apply if-else conditions
-- dont forget to use order by as its mentioned at the end of the problem

/* Write your PL/SQL query statement below */
select e.employee_id,
case when mod(e.employee_id,2) <> 0 and e.name not like 'M%' then e.salary
else e.salary*0 end bonus
from employees e
order by employee_id
