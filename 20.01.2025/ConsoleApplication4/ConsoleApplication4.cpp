#include <iostream>
using namespace std;

// Definicja klasy Prostokat
class Prostokat {
private:
    double bok1;
    double bok2;

public:
    // Prototypy konstruktorów
    Prostokat(); // konstruktor domyślny
    Prostokat(double, double); // konstruktor z parametrami
    Prostokat(const Prostokat&); // konstruktor kopiujący

    // Prototypy metod publicznych
    void pobierzBoki(double&, double&);
    void ustawBoki(double, double);
    double pole();
    double obwod();
};

// Definicje konstruktorów
Prostokat::Prostokat() {
    cout << "Nastąpiło wywołanie konstruktora domyślnego..." << endl;
    bok1 = 0;
    bok2 = 0;
}

Prostokat::Prostokat(double pBok1, double pBok2) {
    cout << "Nastąpiło wywołanie konstruktora parametrycznego..." << endl;
    bok1 = pBok1;
    bok2 = pBok2;
}

// Definicja konstruktora kopiującego
Prostokat::Prostokat(const Prostokat& wzorzec) {
    cout << "Nastąpiło wywołanie konstruktora kopiującego..." << endl;
    bok1 = wzorzec.bok1;
    bok2 = wzorzec.bok2;
}

// Definicje metod publicznych należących do klasy Prostokat
void Prostokat::pobierzBoki(double& pBok1, double& pBok2) {
    pBok1 = bok1;
    pBok2 = bok2;
}

void Prostokat::ustawBoki(double pBok1, double pBok2) {
    bok1 = pBok1;
    bok2 = pBok2;
}

double Prostokat::pole() {
    return bok1 * bok2;
}

double Prostokat::obwod() {
    return 2 * bok1 + 2 * bok2;
}

// Definicja funkcji zewnętrznej, niezależnej od klasy Prostokat
Prostokat kopiujProstokat(Prostokat prostokat) {
    return prostokat; // Zwraca obiekt prostokat
}

int main() {
    double b1, b2; // zmienne pomocnicze
    cout << "PIERWSZY PROSTOKĄT" << endl;

    // Utworzenie obiektu wzorcowego
    Prostokat p1(1, 2); // wywołanie konstruktora parametrycznego

    // Wyświetlenie wartości zmiennych członkowskich obiektu p1
    p1.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 << endl;
    cout << "bok2 = " << b2 << endl;
    cout << endl;

    cout << "DRUGI PROSTOKĄT" << endl;

    // Utworzenie obiektu p2 na podstawie obiektu p1
    Prostokat p2 = p1; // Konstruktor kopiujący jest wywoływany w sposób niejawny
    p2.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 << endl;
    cout << "bok2 = " << b2 << endl;
    cout << endl;

    cout << "TRZECI PROSTOKĄT" << endl;

    // Utworzenie obiektu p3 na podstawie obiektu p1
    Prostokat p3(p1); // Konstruktor kopiujący jest wywoływany w sposób jawny
    p3.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 << endl;
    cout << "bok2 = " << b2 << endl;
    cout << endl;

    cout << "CZWARTY PROSTOKĄT" << endl;

    // Utworzenie obiektu p4 przez użycie konstruktora domyślnego
    Prostokat p4;

    // Skopiowanie obiektu p1 do obiektu p4
    p4 = kopiujProstokat(p1); // Konstruktor kopiujący jest wywoływany dwukrotnie
    p4.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 << endl;
    cout << "bok2 = " << b2 << endl;
    cout << endl;

    return 0;
}

//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------------------------------------------
//------------------------------ 22

#include <iostream>
using namespace std;

// Definicja klasy Prostokat:
class Prostokat {
private:
    double bok1;
    double bok2;
public:
    // Prototypy konstruktorów:
    Prostokat(); // konstruktor domyślny
    Prostokat(double, double); // konstruktor z parametrami
    Prostokat(const Prostokat&); // konstruktor kopiujący

    // Prototypy metod publicznych:
    void pobierzBoki(double&, double&);
    void ustawBoki(double, double);
    double pole();
    double obwod();
};

// Definicje konstruktorów:

// Konstruktor domyślny
Prostokat::Prostokat() {
    cout << "Nastapilo wywolanie konstruktora domyslnego..." << endl;
    bok1 = 0;
    bok2 = 0;
}

// Konstruktor parametryczny
Prostokat::Prostokat(double pBok1, double pBok2) {
    cout << "Nastapilo wywolanie konstruktora parametrycznego..." << endl;
    bok1 = pBok1;
    bok2 = pBok2;
}

// Konstruktor kopiujący
Prostokat::Prostokat(const Prostokat& wzorzec) {
    cout << "Nastapilo wywolanie konstruktora kopiujacego..." << endl;
    bok1 = wzorzec.bok1;
    bok2 = wzorzec.bok2;
}

// Definicje metod publicznych:

void Prostokat::pobierzBoki(double& pBok1, double& pBok2) {
    pBok1 = bok1;
    pBok2 = bok2;
}

void Prostokat::ustawBoki(double pBok1, double pBok2) {
    bok1 = pBok1;
    bok2 = pBok2;
}

double Prostokat::pole() {
    return bok1 * bok2;
}

double Prostokat::obwod() {
    return 2 * bok1 + 2 * bok2;
}

// Definicja funkcji zewnętrznej, niezależnej od klasy Prostokat:
Prostokat kopiujProstokat(Prostokat prostokat) {
    return prostokat;
}

// Funkcja main:
int main() {
    double b1, b2; // zmienne pomocnicze

    cout << "PIERWSZY PROSTOKAT" << endl;
    // Utworzenie obiektu wzorcowego:
    Prostokat p1(1, 2); // wywołanie konstruktora parametrycznego
    // Wyświetlenie wartości zmiennych członkowskich obiektu p1:
    p1.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 << endl;
    cout << "bok2 = " << b2 << endl;
    cout << endl;

    cout << "DRUGI PROSTOKAT" << endl;
    // Utworzenie obiektu p2 na podstawie obiektu p1:
    Prostokat p2 = p1;
    // Wyświetlenie wartości zmiennych członkowskich obiektu p2:
    p2.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 << endl;
    cout << "bok2 = " << b2 << endl;
    cout << endl;

    cout << "TRZECI PROSTOKAT" << endl;
    // Utworzenie obiektu p3 na podstawie obiektu p1:
    Prostokat p3(p1);
    // Wyświetlenie wartości zmiennych członkowskich obiektu p3:
    p3.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 << endl;
    cout << "bok2 = " << b2 << endl;
    cout << endl;

    cout << "CZWARTY PROSTOKAT" << endl;
    // Utworzenie obiektu p4 przez użycie konstruktora domyślnego:
    Prostokat p4;
    // Skopiowanie obiektu p1 do obiektu p4:
    p4 = kopiujProstokat(p1);
    // Wyświetlenie wartości zmiennych członkowskich obiektu p4:
    p4.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 << endl;
    cout << "bok2 = " << b2 << endl;
    cout << endl;

    return 0;
}


#include <iostream>
#include <string> // Include string header
using namespace std;

// Definicja klasy Prostokat:
class Prostokat {
private:
    // Deklaracja prywatnych zmiennych członkowskich
    double bok1;
    double bok2;
    string kolor;

public:
    // Prototypy konstruktorów
    Prostokat(); // Konstruktor domyślny
    Prostokat(double, double); // Konstruktor z parametrami

    // Prototypy metod publicznych
    void ustawKolor(string); // Ustawianie koloru
    void wyswietlDane(); // Wyświetlanie danych prostokąta
};

// Definicja konstruktora domyślnego:
Prostokat::Prostokat() : bok1(0), bok2(0), kolor("bialy") {
    // Wyświetlenie komunikatu kontrolnego:
    cout << "Komunikat kontrolny: zostal wywolany konstruktor domyslny..." << endl;
}

// Definicja konstruktora parametrycznego:
Prostokat::Prostokat(double pBok1, double pBok2) : bok1(pBok1), bok2(pBok2), kolor("bialy") {
    // Wyświetlenie komunikatu kontrolnego:
    cout << "Komunikat kontrolny: zostal wywolany konstruktor parametryczny..." << endl;
}

// Definicje metod publicznych:

// Ustawianie koloru
void Prostokat::ustawKolor(string pKolor) {
    kolor = pKolor;
}

// Wyświetlanie danych prostokąta
void Prostokat::wyswietlDane() {
    cout << "Pierwszy bok: " << bok1 << endl;
    cout << "Drugi bok: " << bok2 << endl;
    cout << "Kolor: " << kolor << endl;
}

// Funkcja main:
int main() {
    // Utworzenie obiektu p1:
    Prostokat p1;
    // Wyświetlenie parametrów prostokąta p1:
    p1.wyswietlDane();
    cout << endl;

    // Utworzenie obiektu p2:
    Prostokat p2(1, 2);
    // Wyświetlenie parametrów prostokąta p2:
    p2.wyswietlDane();

    // Ustawienie (modyfikacja) wartości zmiennej członkowskiej "kolor" obiektu p2:
    p2.ustawKolor("czarny");

    // Ponowne wyświetlenie parametrów prostokąta p2:
    p2.wyswietlDane();

    return 0;
}