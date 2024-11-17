# -*- coding: utf-8 -*-

# ------------------------------------------------------------------------------
# Algoritmo de Euclides (Divisões Sucessivas)
# https://www.youtube.com/watch?v=SyhJFuw2u7c
def mdc(x: int, y: int) -> int:
	while y > 0:
		x, y = y, x % y
	return x

# ------------------------------------------------------------------------------
for _ in range(int(input())):
	f1, f2 = [int(x) for x in input().strip().split()]

	if f2 > f1:
		print(mdc(f2, f1))
	else:
		print(mdc(f1, f2))

