SELECT
  SUBSTR(np.cpf, 1, 3) || '.' || SUBSTR(np.cpf, 4, 3) || '.' || SUBSTR(np.cpf, 7, 3) || '-' || SUBSTR(np.cpf, 10, 2) AS cpf
FROM
  customers AS cus
  INNER JOIN natural_person AS np ON
    np.id_customers = cus.id;

