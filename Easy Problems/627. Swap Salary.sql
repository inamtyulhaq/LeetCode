// https://leetcode.com/problems/swap-salary/description/

// use update statement alonside a case
// use case such that update sex to 'f' when 'm' encounters
// else keep it to 'm' elsewise (meanign when sex is already 'f')

/* Write your PL/SQL query statement below */
update Salary 
set sex = 
case when sex = 'm'
then 'f'
else 'm'
end
