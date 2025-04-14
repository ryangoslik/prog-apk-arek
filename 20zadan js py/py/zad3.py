import math

def row_kwadratowe(a, b, c):
    delta = b**2 - 4*a*c
    if delta < 0:
        return "brak pierwiastkow rzeczywistych"
    x1 = (-b + math.sqrt(delta)) / (2*a)
    x2 = (-b - math.sqrt(delta)) / (2*a)
    return (x1, x2)

a = float(input("podaj a: "))
b = float(input("podaj b: "))
c = float(input("podaj c: "))
print("pierwiastki rownania:", row_kwadratowe(a, b, c))