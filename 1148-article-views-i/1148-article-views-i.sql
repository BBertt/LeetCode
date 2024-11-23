# Write your MySQL query statement below
SELECT author_id AS 'id'
FROM Views
WHERE author_id LIKE viewer_id
GROUP BY id
ORDER BY id