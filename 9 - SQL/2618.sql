SELECT
  prd.name,
  prv.name,
  cat.name
FROM
  products AS prd
  INNER JOIN providers AS prv ON
    prv.id = prd.id_providers
  INNER JOIN categories AS cat ON
    cat.id = prd.id_categories
WHERE
  prv.name = 'Sansul SA'
  AND cat.name = 'Imported';

