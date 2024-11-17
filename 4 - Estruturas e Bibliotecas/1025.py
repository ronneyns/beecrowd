n, q = [int(x) for x in input().strip().split()]
caso = 1

while (n != 0) and (q != 0):
	marmores = []
	for i in range(n):
		marmores.append(int(input()))
	marmores.sort()

	consultas = []
	for i in range(q):
		consultas.append(int(input()))

	print(f'CASE# {caso}:')
	for x in consultas:
		if x in marmores:
			print(f'{x} found at {marmores.index(x) + 1}')
		else:
			print(f'{x} not found')
	n, q = [int(x) for x in input().strip().split()]
	caso += 1

