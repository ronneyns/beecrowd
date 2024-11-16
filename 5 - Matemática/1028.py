# -*- coding: utf-8 -*-

n = int(input())
for i in range(n):
	f1, f2 = [int(x) for x in input().strip().split()]

	# Se f2 > f1, troque os valores
	if f2 > f1:
		aux = f1
		f1 = f2
		f2 = aux

	# MDC por Divisões Sucessivas
	while f2 > 1:
		aux = f1 % f2;
		f1 = f2;
		f2 = aux;
	print(f1)

