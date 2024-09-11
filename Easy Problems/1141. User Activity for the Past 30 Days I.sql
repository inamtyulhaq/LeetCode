-- https://leetcode.com/problems/user-activity-for-the-past-30-days-i/

-- count all the distinct users by the activity_date (use group by)
-- do include the filter of date using 'between and'

/* Write your PL/SQL query statement below */
select to_char(activity_date, 'yyyy-mm-dd') day, count(distinct user_id) active_users
from activity
where activity_date between '2019-06-28' AND '2019-07-27'
group by activity_date
order by activity_date
