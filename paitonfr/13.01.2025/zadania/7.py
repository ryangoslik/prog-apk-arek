# Pobieranie liczby od użytkownika
liczba = input("Podaj liczbę: ")

# Tworzenie słownika do zliczania wystąpień cyfr
cyfry = {}

# Zliczanie wystąpień każdej cyfry
for cyfra in liczba:
    if cyfra.isdigit():  # Upewniamy się, że to jest cyfra
        if cyfra in cyfry:
            cyfry[cyfra] += 1
        else:
            cyfry[cyfra] = 1

# Znalezienie cyfry, która występuje najczęściej
najczestsza_cyfra = max(cyfry, key=cyfry.get)
liczba_wystapien = cyfry[najczestsza_cyfra]

# Wyświetlenie wyniku
print(f"Najczęściej występująca cyfra to: {najczestsza_cyfra}, występuje {liczba_wystapien} razy.")
