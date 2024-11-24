SELECT
  prd.name,
  prv.name,
  prd.price
FROM
  products AS prd
  INNER JOIN providers AS prv ON
    prv.id = prd.id_providers
  INNER JOIN categories AS cat ON
    cat.id = prd.id_categories
WHERE
  prd.price > 1000
  AND cat.name =  'Super Luxury';

