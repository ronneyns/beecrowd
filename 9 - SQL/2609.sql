SELECT
  cat.name,
  SUM(pro.amount) AS qtde_produtos
FROM
  categories AS cat
  INNER JOIN products AS pro ON
    pro.id_categories = cat.id
GROUP BY
  cat.name;

