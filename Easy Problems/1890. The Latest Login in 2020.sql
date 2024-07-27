-- https://leetcode.com/problems/the-latest-login-in-2020/description/

-- simply select the max time stamp for each user by
-- using max function and group by
-- also do put restriction that only search from dates having '2020' at start/ as year

/* Write your PL/SQL query statement below */
select user_id, max(time_stamp) last_stamp from logins
where substr(time_stamp, 1, 4) = '2020'
group by user_id
