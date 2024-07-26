-- https://leetcode.com/problems/customer-placing-the-largest-number-of-orders/description/

-- select those customer numbers
-- whose count is equal to the maximum count of the customer_numbers
-- you will need subqueries for this
-- for outer query, as it also contains a group function
-- also group by customer_number for outer query

/* Write your PL/SQL query statement below */
select customer_number
from orders
having count(customer_number) = (select max(count(customer_number)) from orders  group by customer_number)
 group by customer_number
