SELECT
  mov.id,
  mov.name
FROM
  movies AS mov
  INNER JOIN prices AS pri ON
    pri.id = mov.id_prices
WHERE
  pri.value < 2;

