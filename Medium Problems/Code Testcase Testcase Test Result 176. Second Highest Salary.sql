-- https://leetcode.com/problems/second-highest-salary/description/

-- select the maximum salary where
-- (using subquery)
-- the salary range you are selecting from
-- is less than the highest salary of the table
-- actually you selected the second highest salary

/* Write your PL/SQL query statement below */
select max(salary) SecondHighestSalary from employee where salary < (select max(salary) from employee) 
