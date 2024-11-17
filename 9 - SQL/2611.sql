SELECT
  mov.id,
  mov.name
FROM
  movies AS mov
  INNER JOIN genres AS gen ON
    gen.id = mov.id_genres
WHERE
  gen.description =  'Action';

