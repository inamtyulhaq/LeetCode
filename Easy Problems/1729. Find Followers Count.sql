// https://leetcode.com/problems/find-followers-count/description/

// select the count of followers per user 
// using group by 
// also output in order

/* Write your PL/SQL query statement below */
select user_id, count(follower_id) followers_count
from followers
group by user_id
order by user_id
