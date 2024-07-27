-- https://leetcode.com/problems/actors-and-directors-who-cooperated-at-least-three-times/description/

-- select actor and director ids
-- apply condition of having director count at least being 3
-- group by actor id and then director id so that each director_id 
-- count for each actor separately appears
-- but condition of director count at least being 3 would restrict rows

/* Write your PL/SQL query statement below */
select actor_id, director_id
from actordirector
having count(director_id) >= 3
group by actor_id, director_id
