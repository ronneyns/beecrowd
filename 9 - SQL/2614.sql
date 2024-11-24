SELECT
  cus.name,
  ren.rentals_date
FROM rentals AS ren
  INNER JOIN customers AS cus ON
    cus.id = ren.id_customers
WHERE
  TO_CHAR(ren.rentals_date, 'YYYYMM')::int = 201609;

