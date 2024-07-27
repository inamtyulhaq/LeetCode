-- https://leetcode.com/problems/list-the-products-ordered-in-a-period/description/

-- take sum of units 
-- use inner join
-- use substr for filtering date
-- apply sum of units condition of being at least 100
-- dont forget to use group by as a group function is already used

/* Write your PL/SQL query statement below */
select product_name, sum(unit) unit
from products inner join orders on products.product_id = orders.product_id
where substr(order_date, 1,7) = '2020-02' 
having sum(unit) >= 100
group by product_name
