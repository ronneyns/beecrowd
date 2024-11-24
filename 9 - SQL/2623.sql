SELECT
  pro.name,
  cat.name
FROM
  products AS pro
  INNER JOIN categories AS cat ON
    cat.id = pro.id_categories
WHERE
  pro.amount > 100
  AND cat.id IN (1, 2, 3, 6)
ORDER BY
  cat.id;

