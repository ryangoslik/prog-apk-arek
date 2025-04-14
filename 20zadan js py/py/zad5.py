def czy_armstrong(n):
    digits = [int(d) for d in str(n)]
    power = len(digits)
    return sum(d**power for d in digits) == n

n = int(input("podaj liczbę: "))
if czy_armstrong(n):
    print(f"{n} jest liczbą armstronga.")
else:
    print(f"{n} nie jest liczbą armstronga.")