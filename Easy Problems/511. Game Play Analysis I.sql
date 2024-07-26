-- https://leetcode.com/problems/game-play-analysis-i/

-- select minimum event date for each player_id by using group by for player_id
-- do convert date to the required format either by using 'substr' or 'to_char'

/* Write your PL/SQL query statement below */
select player_id, min(to_char(event_date, 'yyyy-mm-dd')) first_login from activity
group by player_id
