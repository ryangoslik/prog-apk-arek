waga = int(input("Podaj wage w kg: "))
wzrost = float(input("Podaj wzrost w m: "))
bmi = waga/(wzrost**2)
if bmi < 18:
    print(f"{bmi}, Niedowaga")
elif 18 <= bmi <= 25:
    print(f"{bmi}, waga prawidlowa")
elif bmi > 25:
    print(f"{bmi}, nadwaga przestan zrec swinio")
