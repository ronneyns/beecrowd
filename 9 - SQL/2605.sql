SELECT
  prd.name,
  prv.name
FROM
  products AS prd
  INNER JOIN providers AS prv ON
    prv.id = prd.id_providers
WHERE
  prd.id_categories = 6;

