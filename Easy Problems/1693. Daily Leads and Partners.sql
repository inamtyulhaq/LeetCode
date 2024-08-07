-- https://leetcode.com/problems/daily-leads-and-partners/

-- use group by
-- as group functions are used
-- count distinct ids as its mentioned in the problem statement

/* Write your PL/SQL query statement below */
select to_char(date_id, 'YYYY-MM-DD') date_id, make_name, count(distinct lead_id) unique_leads, count(distinct partner_id) unique_partners
from dailysales 
group by date_id, make_name
