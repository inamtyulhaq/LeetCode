// https://leetcode.com/problems/recyclable-and-low-fat-products/

-- You only need to display product ids
-- do see the condition that display ids of products that are both low fat and recyclable

/* Write your PL/SQL query statement below */
SELECT product_id FROM Products
WHERE low_fats = 'Y' AND recyclable = 'Y'
