#Słowniki Dictionary, jest mutowalny
slownik1 = {'klucz1':1,'klucz2':2,'imie':'arkadiusz'}
print(slownik1['imie'],slownik1['klucz1'])
slownikDane={
    'env':'produkcja',
    'bd':'mysgl',
    'version':1.0,
    'show errors':True
}
slownikDane['version'] = 2.0
print(slownikDane)

for key in slownikDane:
    print(slownikDane[key])