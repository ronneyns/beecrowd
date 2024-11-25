WITH maior AS (
    SELECT
      l1.name,
      l1.customers_number
    FROM
      lawyers l1
    ORDER BY
      l1.customers_number DESC
    LIMIT 1
  ),
  menor AS (
    SELECT
      l2.name,
      l2.customers_number
    FROM
      lawyers l2
    ORDER BY
      l2.customers_number
    LIMIT 1
  ),
  media AS (
    SELECT
      'Average' AS name,
      TRUNC(AVG(l3.customers_number)) AS customers_number
    FROM
      lawyers l3
  )

SELECT
  *
FROM maior
UNION ALL
SELECT
  *
FROM menor
UNION ALL
SELECT
  *
FROM media;

