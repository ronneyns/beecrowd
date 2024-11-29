# -*- coding: utf-8 -*-

def contar_leds(valor: str) -> int:
	qtde_leds = (6, 2, 5, 5, 4, 5, 6, 3, 7, 6)
	return sum((qtde_leds[ord(c) - ord('0')] for c in valor))

for _ in range(int(input())):
	valor = input()
	print(f'{contar_leds(valor)} leds');

