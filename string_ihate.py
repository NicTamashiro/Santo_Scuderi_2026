vogais = set('AaEeIiOoUu')
s = input()

if(len(s) == 5 and len(set(s)) == 5 and all(s[i] in vogais for i in range(0,5,2)) and all(s[i] not in vogais for i in range(1,5,2))):
    print(1)
else:
    print(0)


# set('AaEeIiOoUu') -> usa o conjunto pra consultar (in vogais)
# set(s) -> remove repetidos da string

#all() -> Se todos forem True → retorna True; Se qualquer um for False → para na hora e retorna False