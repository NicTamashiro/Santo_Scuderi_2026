qtd = int(input())
portos = []

for i in range(qtd):
    portos.append(int(input()))

ordenar = sorted(portos)

print(f"{abs(ordenar[qtd-1] - ordenar[0])}")