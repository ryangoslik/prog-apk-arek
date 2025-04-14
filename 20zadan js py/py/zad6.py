import math
def trojkat_pole_obwod(a, b, c):
    if a + b > c and a + c > b and b + c > a:
        obwod = a + b + c
        s = obwod / 2
        pole = math.sqrt(s * (s - a) * (s - b) * (s - c))
        return obwod, pole
    else:
        return None
a = float(input("podaj bok a: "))
b = float(input("podaj bok b: "))
c = float(input("podaj bok c: "))
wynik = trojkat_pole_obwod(a, b, c)
if wynik:
    obwod, pole = wynik
    print("obwod:", obwod)
    print("pole:", pole)
else:
    print("taki trojkąt nie istnieje.")