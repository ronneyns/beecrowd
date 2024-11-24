SELECT
  cus.name
FROM
  customers AS cus
WHERE
  cus.id IN (
    SELECT
      id_customers
    FROM
      legal_person
  );

