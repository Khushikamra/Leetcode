# Write your MySQL query statement below
WITH CTE AS
(
    SELECT EMPLOYEE_ID, COUNT(EMPLOYEE_ID) AS COUNT
    FROM EMPLOYEE
    GROUP BY EMPLOYEE_ID
)

SELECT E.EMPLOYEE_ID, E.DEPARTMENT_ID 
FROM EMPLOYEE E
JOIN CTE D
ON E.EMPLOYEE_ID = D.EMPLOYEE_ID
WHERE (D.COUNT = 1) OR (E.PRIMARY_FLAG = 'Y')
