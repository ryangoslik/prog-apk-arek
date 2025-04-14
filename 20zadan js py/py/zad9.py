import math
def stopnie_na_radiany(deg):
    return deg * math.pi / 180
def radiany_na_stopnie(rad):
    return rad * 180 / math.pi
wybor = input("wybierz konwersje (1->stopnie na radiany 2->radiany na stopnie) : ")
if wybor == "1":
    deg = float(input("podaj wartosc w stopniach : "))
    print("wartosc w radianach :", stopnie_na_radiany(deg))
elif wybor == "2":
    rad = float(input("podaj wartosc w radianach : "))
    print("wartosc w stopniach: ", radiany_na_stopnie(rad))
else:
    print("nieprawidlowy wybor. ")