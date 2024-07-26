-- https://leetcode.com/problems/find-total-time-spent-by-each-employee/description/

-- firstly do see the date format to output
-- regarding time, simply take sum of all out_time-in_time
-- and group it by event_day and emp_id
-- which ultimately leads to sum of total time spent by each employee per day
-- which satisfies the conditions in the problem statement

/* Write your PL/SQL query statement below */
select to_char(event_day, 'yyyy-mm-dd') day, emp_id, sum(out_time-in_time) total_time
from employees 
group by event_day, emp_id
