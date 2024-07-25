-- https://leetcode.com/problems/combine-two-tables/description/

-- use left join
-- so that all persons from the persons table show up
-- although they may not be avaiable in address table
-- actually that is what said in the problem statement
-- that display null in front of such persons

/* Write your PL/SQL query statement below */
select firstName, lastName, city, state from person left join address on person.personid = address.personid
