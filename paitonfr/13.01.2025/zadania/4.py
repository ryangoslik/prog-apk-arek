# Pobranie liczby od użytkownika
liczba = int(input("Podaj liczbę: "))

# Tworzenie tabliczki mnożenia w postaci listy
tabliczka = [liczba * i for i in range(1, 11)]

# Wyświetlenie wyniku
print(f"Tabliczka mnożenia dla {liczba}: {tabliczka}")
