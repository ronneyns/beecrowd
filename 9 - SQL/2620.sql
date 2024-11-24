SELECT
  cus.name,
  ord.id
FROM
  customers AS cus
  INNER JOIN orders AS ord ON
    ord.id_customers = cus.id
WHERE
  CAST(TO_CHAR(ord.orders_date, 'YYYYMM') AS INTEGER) BETWEEN 201601 AND 201606;

