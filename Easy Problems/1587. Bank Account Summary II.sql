-- https://leetcode.com/problems/bank-account-summary-ii/description/

-- take the sum of all the amounts for a particular account
-- do apply condition given in question using having clause

/* Write your PL/SQL query statement below */
select u.name, sum(t.amount) balance from
users u inner join transactions t on
u.account = t.account
group by t.account, u.name
having sum(t.amount) > 10000
