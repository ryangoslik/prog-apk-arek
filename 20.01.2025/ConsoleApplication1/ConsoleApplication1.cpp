#include <iostream>
#include <cmath>
using namespace std;

// Definicja struktury Data:
struct Data {
    int dzien;
    int miesiac;
    int rok;
};

// Przykład 12.6 - Inicjalizacja obiektów wartościami domyślnymi
class Pracownik {
public:
    int id = -1; // inicjalizator wewnątrzklasowy
    string imie = "Imie domyslne"; // inicjalizator wewnątrzklasowy
    string nazwisko = "Nazwisko domyslne"; // inicjalizator wewnątrzklasowy
    Data data_zatrudnienia = { 1, 1, 2000 }; // inicjalizator wewnątrzklasowy

    // Prototyp konstruktora domyślnego:
    Pracownik();

    // Prototyp konstruktora parametrycznego:
    Pracownik(int, string, string, Data);

    // Prototyp funkcji członkowskiej:
    void wyswietlDane();
};

// Definicje konstruktorów:
Pracownik::Pracownik() {
    cout << "Komunikat kontrolny: wywolanie konstruktora domyslnego" << endl;
}

Pracownik::Pracownik(int pId, string pImie, string pNazwisko, Data pData) {
    id = pId;
    imie = pImie;
    nazwisko = pNazwisko;
    data_zatrudnienia = pData;
}

// Definicja funkcji członkowskiej wyswietlDane():
void Pracownik::wyswietlDane() {
    cout << "Numer identyfikacyjny: " << id << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Data zatrudnienia: " << data_zatrudnienia.dzien << "-"
        << data_zatrudnienia.miesiac << "-" << data_zatrudnienia.rok << endl;
}

// Przykład 12.7 - Inicjalizacja obiektów wartościami zadanymi
class Pracownik2 {
public:
    int id = -1; // wewnątrzklasowy inicjalizator zmiennej członkowskiej
    string imie = "Imie domyslne"; // wewnątrzklasowy inicjalizator zmiennej członkowskiej
    string nazwisko = "Nazwisko domyslne"; // wewnątrzklasowy inicjalizator zmiennej członkowskiej
    Data data_zatrudnienia = { 1, 1, 2000 }; // wewnątrzklasowy inicjalizator zmiennej członkowskiej

    // Prototyp konstruktora domyślnego:
    Pracownik2();

    // Prototyp konstruktora parametrycznego:
    Pracownik2(int, string, string, Data);

    // Prototyp funkcji członkowskiej:
    void wyswietlDane();
};

// Definicje konstruktorów:
Pracownik2::Pracownik2() {
    id = 0; // inicjalizacja zmiennej członkowskiej wartością domyślną
    imie = "Imie"; // inicjalizacja zmiennej członkowskiej wartością domyślną
    nazwisko = "Nazwisko"; // inicjalizacja zmiennej członkowskiej wartością domyślną
    data_zatrudnienia = { 1, 1, 2000 }; // inicjalizacja zmiennej członkowskiej wartością domyślną
    cout << "Komunikat kontrolny: wywolanie konstruktora domyslnego" << endl;
}

Pracownik2::Pracownik2(int pId, string pImie, string pNazwisko, Data pData) {
    id = pId;
    imie = pImie;
    nazwisko = pNazwisko;
    data_zatrudnienia = pData;
}

// Definicja funkcji członkowskiej wyswietlDane():
void Pracownik2::wyswietlDane() {
    cout << "Numer identyfikacyjny: " << id << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Data zatrudnienia: " << data_zatrudnienia.dzien << "-"
        << data_zatrudnienia.miesiac << "-" << data_zatrudnienia.rok << endl;
}

// Przykład 12.8 - Konstruktor parametryczny z wartościami domyślnymi
class Pracownik3 {
public:
    int id = -1;
    string imie = "Imie domyslne";
    string nazwisko = "Nazwisko domyslne";
    Data data_zatrudnienia = { 1, 1, 2000 };

    // Prototyp konstruktora parametrycznego:
    Pracownik3(int pId = 0, string pImie = "Imie", string pNazwisko = "Nazwisko", Data pData = { 1, 1, 2000 });

    // Prototyp funkcji członkowskiej:
    void wyswietlDane();
};

// Definicja konstruktora parametrycznego:
Pracownik3::Pracownik3(int pId, string pImie, string pNazwisko, Data pData) {
    id = pId;
    imie = pImie;
    nazwisko = pNazwisko;
    data_zatrudnienia = pData;
}

// Definicja funkcji członkowskiej wyswietlDane():
void Pracownik3::wyswietlDane() {
    cout << "Numer identyfikacyjny: " << id << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Data zatrudnienia: " << data_zatrudnienia.dzien << "-"
        << data_zatrudnienia.miesiac << "-" << data_zatrudnienia.rok << endl;
}

// Przykład 12.9 - Inicjalizacja agregacyjna
class Pracownik4 {
public:
    int id;
    string imie;
    string nazwisko;
    Data data_zatrudnienia;

    // Prototyp funkcji członkowskiej:
    void wyswietlDane();
};

// Definicja funkcji członkowskiej wyswietlDane():
void Pracownik4::wyswietlDane() {
    cout << "Numer identyfikacyjny: " << id << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Data zatrudnienia: " << data_zatrudnienia.dzien << "-"
        << data_zatrudnienia.miesiac << "-" << data_zatrudnienia.rok << endl;
}

// Przykład 12.10 - Inicjalizacja konstruktorowa
class Pracownik5 {
    // Deklaracje prywatnych zmiennych członkowskich:
    int id;
    string imie, nazwisko;
    Data data_zatrudnienia;

public:
    // Prototypy konstruktorów:
    Pracownik5();
    Pracownik5(int, string, string, Data);

    // Prototyp funkcji członkowskiej:
    void wyswietlDane();
};

// Definicje konstruktorów:
Pracownik5::Pracownik5() {
    id = -1;
    imie = "Imie domyslne";
    nazwisko = "Nazwisko domyslne";
    data_zatrudnienia = { 1, 1, 2000 };
}

Pracownik5::Pracownik5(int pId, string pImie, string pNazwisko, Data pData) {
    id = pId;
    imie = pImie;
    nazwisko = pNazwisko;
    data_zatrudnienia = pData;
    cout << "Komunikat kontrolny: wywolano konstruktor parametryczny" << endl;
}

// Definicja funkcji członkowskiej wyswietlDane():
void Pracownik5::wyswietlDane() {
    cout << "Numer identyfikacyjny: " << id << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Data zatrudnienia: " << data_zatrudnienia.dzien << "-"
        << data_zatrudnienia.miesiac << "-" << data_zatrudnienia.rok << endl;
}

// Przykład 12.11 - Inicjalizacja konstruktorowa
class Pracownik6 {
    // Deklaracje prywatnych zmiennych członkowskich:
    int id;
    string imie, nazwisko;
    Data data_zatrudnienia;

public:
    // Prototypy konstruktorów:
    Pracownik6();
    Pracownik6(int, string, string, Data);

    // Prototyp funkcji członkowskiej:
    void wyswietlDane();
};

// Definicje konstruktorów:
Pracownik6::Pracownik6() {
    id = -1;
    imie = "Imie domyslne";
    nazwisko = "Nazwisko domyslne";
    data_zatrudnienia = { 1, 1, 2000 };
}

Pracownik6::Pracownik6(int pId, string pImie, string pNazwisko, Data pData) {
    id = pId;
    imie = pImie;
    nazwisko = pNazwisko;
    data_zatrudnienia = pData;
}

// Definicja funkcji członkowskiej wyswietlDane():
void Pracownik6::wyswietlDane() {
    cout << "Numer identyfikacyjny: " << id << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Data zatrudnienia: " << data_zatrudnienia.dzien << "-"
        << data_zatrudnienia.miesiac << "-" << data_zatrudnienia.rok << endl;
}

// Przykład 12.12 - Lista inicjalizacyjna zmiennych członkowskich
class Pracownik7 {
    const int id;
    string imie, nazwisko;
    Data data_zatrudnienia;

public:
    // Prototypy konstruktorów:
    Pracownik7();
    Pracownik7(int, string, string, Data);

    // Prototyp funkcji członkowskiej:
    void wyswietlDane();
};

// Definicje konstruktorów:
Pracownik7::Pracownik7() : id(-1), imie("Imie domyslne"), nazwisko("Nazwisko domyslne"), data_zatrudnienia({ 1, 1, 2000 }) {
    cout << "Komunikat kontrolny: wywolano konstruktor domyslny" << endl;
}

Pracownik7::Pracownik7(int pId, string pImie, string pNazwisko, Data pData) : id(pId), imie(pImie), nazwisko(pNazwisko), data_zatrudnienia(pData) {
    cout << "Komunikat kontrolny: wywolano konstruktor parametryczny" << endl;
}

// Definicja funkcji członkowskiej wyswietlDane():
void Pracownik7::wyswietlDane() {
    cout << "Numer identyfikacyjny: " << id << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Data zatrudnienia: " << data_zatrudnienia.dzien << "-"
        << data_zatrudnienia.miesiac << "-" << data_zatrudnienia.rok << endl;
}

// PROGRAM GŁÓWNY:
int main() {
    // Przykład 12.6 - Inicjalizacja obiektów wartościami domyślnymi
    Pracownik pracownik1;
    pracownik1.wyswietlDane();

    // Przykład 12.7 - Inicjalizacja obiektów wartościami zadanymi
    Pracownik2 pracownik2;
    pracownik2.wyswietlDane();

    // Przykład 12.8 - Konstruktor parametryczny z wartościami domyślnymi
    Pracownik3 pracownik3 = Pracownik3();
    pracownik3.wyswietlDane();

    // Przykład 12.9 - Inicjalizacja agregacyjna
    Pracownik4 pracownik4 = { 1, "Jan", "Kowalski", {1, 1, 2020} };
    pracownik4.wyswietlDane();

    // Przykład 12.10 - Inicjalizacja konstruktorowa
    Pracownik5 pracownik5(1, "Jan", "Kowalski", { 1, 1, 2020 });
    pracownik5.wyswietlDane();

    // Przykład 12.11 - Inicjalizacja konstruktorowa
    Pracownik6 pracownik6(1, "Jan", "Kowalski", { 1, 1, 2020 });
    pracownik6.wyswietlDane();

    // Przykład 12.12 - Lista inicjalizacyjna zmiennych członkowskich
    Pracownik7 pracownik7;
    pracownik7.wyswietlDane();

    Pracownik7 pracownik8(1, "Jan", "Kowalski", { 1, 1, 2020 });
    pracownik8.wyswietlDane();

    return 0;
}