# -*- coding: utf-8 -*-

for _ in range(int(input())):
	mensagem = input()
	saida = [chr(ord(c) + 3) if c.isalpha() else c for c in mensagem]
	saida.reverse()
	meio = len(saida) // 2
	saida = saida[:meio] + [chr(ord(c) - 1) for c in saida[meio:]]
	print(''.join(saida))

