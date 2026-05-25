n = int(input())
nums = list(map(int, input().split()))

quantidade = 1
resultado = 1

for i in range(1, n):
    if nums[i] == nums[i - 1]:
        quantidade += 1
    else:
        if quantidade >= resultado:
            resultado = quantidade
        quantidade = 1

if quantidade > resultado:
    resultado = quantidade

print(resultado)