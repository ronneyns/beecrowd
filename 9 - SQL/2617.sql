SELECT
  prd.name,
  prv.name
FROM
  products AS prd
  INNER JOIN providers AS prv ON
    prv.id = prd.id_providers
WHERE
  prv.name = 'Ajax SA';

