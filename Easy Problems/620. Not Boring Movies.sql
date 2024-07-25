-- https://leetcode.com/problems/not-boring-movies/

-- simple select from the table
-- apply condition in where clause
-- that mod of id is not zero (it ain't even)
-- and its description is not boring
-- do ordering as per asked

/* Write your PL/SQL query statement below */
select * from cinema
where mod(id,2) <> 0 and description <> 'boring'
order by rating desc
