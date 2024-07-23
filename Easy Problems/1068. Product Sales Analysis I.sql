-- https://leetcode.com/problems/product-sales-analysis-i/description/

-- use inner join
-- do see that product_id is same in both tables, so use "using" keyword

/* Write your PL/SQL query statement below */
select product_name, year, price from Sales inner join Product using(product_id)
