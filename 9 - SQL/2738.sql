SELECT
  can.name,
  ROUND((sco.math * 2 + sco.specific * 3 + sco.project_plan * 5) / 10, 2) AS media
FROM
  candidate AS can
  INNER JOIN score as sco ON
    sco.candidate_id = can.id
ORDER BY
  2 DESC;

