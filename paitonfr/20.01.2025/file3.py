# instrukcje warunkowe, porównanie wartosci, kontrola przeplywu danych
print(1 == 3)
print(1 > 3)
print(1<=3)
print(1!=3)
a = 'a'
b = 'a'
print(a==b)

if 1 == 1:
    print('to jest prawda')
else:
    print('to nie prawda')

name = input('Podaj imie = ')
if len(name) < 3:
    print('Podaj min 3 znaki')
else:
    print(name)