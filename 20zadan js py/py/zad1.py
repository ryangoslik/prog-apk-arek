def silnia_iter(n):
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result

def silnia_rek(n):
    if n == 0:
        return 1
    return n * silnia_rek(n - 1)

n = int(input("podaj liczbe do obliczenia silni: "))
print("silnia iteracyjnie:", silnia_iter(n))
print("silnia rekurencyjnie:", silnia_rek(n))