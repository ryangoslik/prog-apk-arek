a = float(input("Podaj długość pierwszego boku: "))
b = float(input("Podaj długość drugiego boku: "))
prostokat = (a, b)
pole = prostokat[0] * prostokat[1]
obwod = 2 * (prostokat[0] + prostokat[1])
print(f"Pole prostokąta: {pole:}")
print(f"Obwód prostokąta: {obwod:}")