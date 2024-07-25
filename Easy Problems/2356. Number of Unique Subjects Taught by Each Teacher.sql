-- https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher

-- it looks easy as it has to be done with count function
-- but it's mentioned that count unique subjects taught by a teacher
-- hence count the distinct subject ids

/* Write your PL/SQL query statement below */
select teacher_id, count(distinct subject_id) cnt from teacher group by teacher_id
