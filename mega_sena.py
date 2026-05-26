nums = list(map(int, input().split()))
unicos = sorted(set(nums))
for n in unicos:
    print(n)
print(f"Total de jogos completos: {len(unicos) // 6}")

# Divide a entrada pelos espaços
#.split()

# Converte cada parte para inteiro
#map(int, ...)

# Transforma o resultado em lista
#list(...)

# Remove repetidos
#set(...)

# Ordena os números
#sorted(...)
