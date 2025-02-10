wyr = input("podaj wyrazenie: ")
try:
    output = eval(wyr)
    print(f"Wynik wyrazenia to {output}")
except Exception as e:
    print(f"nie obliczylo {e}")