a = float(input("Podaj długość pierwszego boku: "))
b = float(input("Podaj długość drugiego boku: "))

# Przechowanie boków w tupli
prostokat = (a, b)

# Obliczanie pola i obwodu
pole = prostokat[0] * prostokat[1]
obwod = 2 * (prostokat[0] + prostokat[1])

# Wyświetlenie wyników
print(f"Pole prostokąta: {pole:}")
print(f"Obwód prostokąta: {obwod:}")