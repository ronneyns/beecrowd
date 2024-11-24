SELECT
  prd.name
FROM
  products AS prd
  INNER JOIN providers AS prv ON
    prv.id = prd.id_providers
WHERE
  prd.amount BETWEEN 10 AND 20
  AND UPPER(prv.name) LIKE 'P%';

