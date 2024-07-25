-- https://leetcode.com/problems/employees-earning-more-than-their-managers/

-- It is a simple inner join question
-- apply join condition such that employee's id is
-- equal to another employee's manager id
-- apply condition in where
-- that employee's salary must be greater than the salary
-- of the employee whose managerid is being compared

/* Write your PL/SQL query statement below */
select e.name Employee from employee e inner join employee m on e.managerId = m.id
where e.salary > m.salary
