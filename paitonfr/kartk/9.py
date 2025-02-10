a = int(input("podaj liczbe elementow ciagu fibonacziego :D   : "))
fibonacci = [0,1]
for i in range(2,a):
    fibonacci.append(fibonacci[-1] + fibonacci[-2])
print(f"Ciag dla elementu {a}: {fibonacci}")