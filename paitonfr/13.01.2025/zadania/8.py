# Pobranie wyrażenia matematycznego od użytkownika
wyrazenie = input("Podaj wyrażenie matematyczne: ")

# Obliczanie wartości wyrażenia
try:
    wynik = eval(wyrazenie)
    print(f"Wynik wyrażenia {wyrazenie} to: {wynik}")
except Exception as e:
    print(f"Nie udało się obliczyć wyrażenia. Błąd: {e}")
