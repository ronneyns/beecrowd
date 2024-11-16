SELECT
  pro.id,
  pro.name
FROM
  products AS pro
  INNER JOIN categories AS cat ON
    cat.id = pro.id_categories
WHERE
  cat.name LIKE 'super%';

