n = int(input("Podaj ile liczb:"))
parzysteL = []
nieparzysteL = []
for i in range(n):
    liczba = int(input(f"Podaj liczbe {i+1}:"))
    if liczba % 2 == 0:
        parzysteL.append(liczba)
    else:
        nieparzysteL.append(liczba)
    print(f"Parzyste: {parzysteL}, nieparzyste: {nieparzysteL}")
