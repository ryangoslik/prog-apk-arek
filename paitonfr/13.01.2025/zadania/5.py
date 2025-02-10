n = int(input("podaj n liczb: "))
parzyste = []
nieparzyste = []
for i in range(n):
    liczba=int(input(f"Podaj liczbę {i+1}: "))
    if liczba % 2 == 0:
        parzyste.append(liczba)
    else:
        nieparzyste.append(liczba)
print(f"Parzyste: {parzyste} nieparzyste: {nieparzyste}")