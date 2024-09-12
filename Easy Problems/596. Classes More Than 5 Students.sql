-- https://leetcode.com/problems/classes-more-than-5-students/description/

-- select those classes
-- having count greater than 4 (at least 5)
-- group by class

/* Write your PL/SQL query statement below */
select class from courses
having count(student) > 4
group by class
