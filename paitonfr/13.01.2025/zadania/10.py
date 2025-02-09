# Pobranie wagi i wzrostu od użytkownika
waga = float(input("Podaj wagę (w kg): "))
wzrost = float(input("Podaj wzrost (w metrach): "))

# Obliczanie BMI
bmi = waga / (wzrost ** 2)

# Określenie kategorii na podstawie BMI
if bmi < 18.5:
    kategoria = "Niedowaga"
elif 18.5 <= bmi < 24.9:
    kategoria = "Waga prawidłowa"
elif 25 <= bmi < 29.9:
    kategoria = "Nadwaga"
else:
    kategoria = "Otyłość"

# Wyświetlenie wyników
print(f"Twoje BMI wynosi: {bmi:.2f}")
print(f"Twoja kategoria: {kategoria}")
