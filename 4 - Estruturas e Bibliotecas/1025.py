
# ------------------------------------------------------------------------------
def busca_binaria(lista: list, valor: int) -> int:
	inicio = 0
	fim = len(lista)
	while (inicio < fim):
		meio = (inicio + fim) // 2
		if (lista[meio] < valor):
			inicio = meio + 1
		else:
			fim = meio
	if (inicio < len(lista)) and (lista[inicio] == valor):
		return inicio
	return -1

# ------------------------------------------------------------------------------
n, q = [int(x) for x in input().strip().split()]
caso = 1
while (n != 0) and (q != 0):
	marmores = []
	for _ in range(n):
		marmores.append(int(input()))
	marmores.sort()

	print(f'CASE# {caso}:')
	for _ in range(q):
		valor = int(input())
		pos = busca_binaria(marmores, valor)
		if pos == -1:
			print(f'{valor} not found')
		else:
			print(f'{valor} found at {pos + 1}')
	n, q = [int(x) for x in input().strip().split()]
	caso += 1

