# Pobranie liczby 'a' (ilość elementów w ciągu Fibonacciego)
a = int(input("Podaj liczbę elementów ciągu Fibonacciego: "))

# Inicjalizacja listy z pierwszymi dwoma elementami ciągu Fibonacciego
fibonacci = [0, 1]

# Generowanie kolejnych elementów ciągu Fibonacciego
for i in range(2, a):
    fibonacci.append(fibonacci[-1] + fibonacci[-2])

# Wyświetlenie ciągu Fibonacciego
print(f"Ciąg Fibonacciego ({a} elementów): {fibonacci[:a]}")