// https://leetcode.com/problems/find-customer-referee/

-- select only those names which are not referred by id = 2
-- or which are NULL

/* Write your PL/SQL query statement below */
SELECT name FROM Customer WHERE referee_id <> 2 OR referee_id is NULL
