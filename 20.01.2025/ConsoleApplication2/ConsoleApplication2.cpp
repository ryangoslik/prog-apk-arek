#include <iostream>
using namespace std;

// Definicja klasy Pracownik
class Pracownik {
    // Deklaracje zmiennych członkowskich:
    int id;
    string imie;
    string nazwisko;

public:
    // Prototyp konstruktora domyślnego:
    Pracownik();

    // Prototyp konstruktora parametrycznego:
    Pracownik(int pid, string pImie, string pNazwisko);

    // Prototyp funkcji członkowskiej:
    void wyswietlDane();
};

// Definicja konstruktora
Pracownik::Pracownik() {
    id = 0;
    imie = "Imie domyślne";
    nazwisko = "Nazwisko domyślne";
    cout << "Komunikat kontrolny: wywołano konstruktora domyślnego ..."
        << endl;
}

// Definicja konstruktora
Pracownik::Pracownik(int pid, string pImie, string pNazwisko) {
    id = pid;
    imie = pImie;
    nazwisko = pNazwisko;
    cout << "Komunikat kontrolny: wywołano konstruktora parametrycznego ..."
        << endl;
}

// Definicja funkcji członkowskiej
void Pracownik::wyswietlDane() {
    cout << "Numer identyfikacyjny: " << id << endl;
    cout << "Imie: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
}

int main() {
    // Utworzenie obiektu pracownik1 jako instancji klasy Pracownik:
    Pracownik pracownik1;
    cout << "Właściwości pracownik1: " << endl;
    pracownik1.wyswietlDane();

    // Utworzenie i inicjalizacja agrogacji obiektu pracownik2:
    Pracownik pracownik2(2, "Adam", "Nowak");
    cout << "Właściwości pracownik2: " << endl;
    pracownik2.wyswietlDane();

    return 0;
}