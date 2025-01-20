# petle
'''
counter = 0

while counter < 10:
    print(counter)
    counter += 1
'''

# break oraz continue
'''
licznik = 1
while licznik <= 10:
    licznik +=1
    if licznik == 5:
        break
    print(licznik)
'''

'''
licznik2 = 1
while licznik2 <= 10:
    licznik2 += 1
    if licznik2 % 2 == 0:
        continue
    print(licznik2)
'''

while True:
    num = int(input("Podaj liczba wieksza od 0: "))
    if num > 0:
        print("Liczba jest wieksza od 0")
        break
    else:
        print("to nie jest prawidlowa liczba!") 