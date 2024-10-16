-- https://leetcode.com/problems/big-countries/

-- solved in ORACLE SQL
-- do focus that select only those names, populations and areas where either area is greater than 3000000
-- OR
-- population is greater than 25000000

/* Write your PL/SQL query statement below */
SELECT name, population, area FROM World WHERE area >=3000000 OR population >=25000000
