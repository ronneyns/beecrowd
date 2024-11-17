# -*- coding: utf-8 -*-

# ------------------------------------------------------------------------------
def mdc_divisoes_sucessivas(x: int, y: int) -> int:
	while y > 1:
		x, y = y, x % y
	return x

# ------------------------------------------------------------------------------
for _ in range(int(input())):
	f1, f2 = [int(x) for x in input().strip().split()]

	# Se f2 > f1, troque os valores
	if f2 > f1:
		f1, f2 = f2, f1
	print(mdc_divisoes_sucessivas(f1, f2))

