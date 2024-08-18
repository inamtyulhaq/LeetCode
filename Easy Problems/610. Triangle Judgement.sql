-- https://leetcode.com/problems/triangle-judgement/

-- use the rule that for a triangle to be made,
-- sum of any two sides must be greater than the third side
-- i used group by
-- can also be done without using group by 

/* Write your PL/SQL query statement below */
select x,y,z, case
when (sum(x+y)>z) AND (sum(x+z)>y) AND (sum(y+z)>x) then 'Yes'
else 'No' end triangle
from triangle
group by x,y,z
