def fibonacci(n):
    a, b = 0, 1
    for _ in range(n):
        a, b = b, a + b
    return a

n = int(input("podaj indeks wyrazu ciągu fibonacciego: "))
print(f"{n}. wyraz ciągu fibonacciego to:", fibonacci(n))