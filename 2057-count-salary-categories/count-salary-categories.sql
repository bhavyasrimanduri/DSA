# Write your MySQL query statement below
SELECT
'Low Salary' AS Category,
COUNT(*) AS accounts_count
FROM Accounts
WHERE income < 20000
UNION ALL
SELECT
'Average Salary' AS Category,
COUNT(*) AS accounts_count
FROM Accounts
WHERE income >=20000 and income<=50000
UNION ALL
SELECT
'High Salary' AS Category,
COUNT(*) AS accounts_count
FROM Accounts
WHERE income > 50000