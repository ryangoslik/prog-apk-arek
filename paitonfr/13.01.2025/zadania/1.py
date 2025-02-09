liczby = []
for i in range(5):
    liczba = int(input("Podaj liczba:"))
    liczby.append(liczba)
print(liczby)
liczbyS = sum(liczby)/len(liczby)
print(liczbyS)
