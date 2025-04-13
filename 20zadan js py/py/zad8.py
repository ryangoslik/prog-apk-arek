import math
def odleglosc(x1, y1, x2, y2):
    return math.sqrt((x2 - x1)**2 + (y2 - y1)**2)
x1 = float(input("podaj x1: "))
y1 = float(input("podaj y1: "))
x2 = float(input("podaj x2: "))
y2 = float(input("podaj y2: "))
print("odleglosc miedzy punktami:", odleglosc(x1, y1, x2, y2))