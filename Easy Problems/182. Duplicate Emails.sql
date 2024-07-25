-- https://leetcode.com/problems/duplicate-emails/

-- do it using inner join on person table
-- apply condition that emails are equal
-- actually that's what asked in the problem statement
-- do mention condition that id of first person's table
-- is not equal to the id of second person's table

/* Write your PL/SQL query statement below */
select distinct p.email from person p inner join person p1 on p.email = p1.email
where p.id <> p1.id
