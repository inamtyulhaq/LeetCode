-- https://leetcode.com/problems/invalid-tweets/description/

-- simply select those tweet ids
-- whose length is greater than 15
-- use "length" keyword

/* Write your PL/SQL query statement below */
select tweet_id from Tweets 
where length(content) > 15
