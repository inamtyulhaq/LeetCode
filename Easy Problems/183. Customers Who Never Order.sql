-- https://leetcode.com/problems/customers-who-never-order/

-- select all those customers' names 
-- whose id isn't in the customerId column of the table 'orders'
-- use subquery

/* Write your PL/SQL query statement below */
select name Customers from customers where id not in (select customerId from orders)
