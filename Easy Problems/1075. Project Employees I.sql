-- https://leetcode.com/problems/project-employees-i/description/

-- do see the format of the output of the average of the experience years
-- you would need to use "inner join" as project_id and experience_years
-- are in different tables
-- do remember to use group by function as a group function is used
-- group by project_id as 
-- 1) it's must to be grouped (used in select statement)
-- 2) you need average experience per project of all employees
-- hence no sense makes to group by employee_id

/* Write your PL/SQL query statement below */
select project_id, round(avg(experience_years),2) average_years
from project p inner join employee e on p.employee_id = e.employee_id
group by project_id
