SELECT ee.name
FROM Employee e
INNER JOIN Employee ee
ON e.managerId = ee.id AND e.managerId IS NOT NULL
GROUP BY ee.id
HAVING COUNT(ee.id) > 4
