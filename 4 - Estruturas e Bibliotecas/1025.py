from bisect import bisect_left # https://docs.python.org/3/library/bisect.html

# ------------------------------------------------------------------------------
def BinarySearch(lista: list, valor: int) -> int:
	pos = bisect_left(lista, valor)
	if (pos != len(lista)) and (lista[pos] == valor):
		return pos
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
		pos = BinarySearch(marmores, valor)
		if pos == -1:
			print(f'{valor} not found')
		else:
			print(f'{valor} found at {pos + 1}')
	n, q = [int(x) for x in input().strip().split()]
	caso += 1

