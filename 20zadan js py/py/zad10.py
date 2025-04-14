def na_jednej_prostej(p1, p2, p3):
    (x1, y1), (x2, y2), (x3, y3) = p1, p2, p3
    return (y2 - y1)*(x3 - x1) == (y3 - y1)*(x2 - x1)
print("podaj wspolrzedne trzech punktow : ")
x1, y1 = float(input("x1: ")), float(input("y1: "))
x2, y2 = float(input("x2: ")), float(input("y2: "))
x3, y3 = float(input("x3: ")), float(input("y3: "))

if na_jednej_prostej((x1, y1), (x2, y2), (x3, y3)):
    print("punkty leza na jednej prostej. ")
else:
    print("Punkty nie leza na jednej prostej.")