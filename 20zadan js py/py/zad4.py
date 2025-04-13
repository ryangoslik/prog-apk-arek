def suma_geometryczna(a, r, n):
    return a * (1 - r**n) / (1 - r)

a = float(input("podaj pierwszy wyraz szeregu: "))
r = float(input("podaj iloraz szeregu: "))
n = int(input("podaj liczbę wyrazow: "))
print("suma szeregu geometrycznego:", suma_geometryczna(a, r, n))