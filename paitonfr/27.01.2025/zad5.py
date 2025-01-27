#zbiur SET, struktura danych np zbiory A i B czesc wspolna
a = set([1,2,3,4])
b = set([1,3,7,9])
print(a,b)
print(a.intersection(b))
print(a.union(b))
print(a.difference(b))