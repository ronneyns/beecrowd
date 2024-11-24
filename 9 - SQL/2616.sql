SELECT
  cus.id,
  cus.name
FROM
  customers AS cus
  LEFT JOIN locations AS loc ON
    loc.id_customers = cus.id
WHERE
  loc.id IS NULL
ORDER BY
  cus.id;

