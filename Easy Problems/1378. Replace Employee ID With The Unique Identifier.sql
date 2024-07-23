-- https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/description/

-- use left join as its said that even if a user doesn't have id, show null there
-- left/right join based on which table's name you write first
-- can use "using" keyword after "on"

/* Write your PL/SQL query statement below */
select unique_id, name from employees e left join employeeuni eu on e.id = eu.id
