#include <iostream>
#include <cmath>
using namespace std;

/*
//Zadanie 1
class Uczen {
public:
    // Zmienne członkowskie
    string imie;
    string nazwisko;
    string klasa;
    string grupa;
    int numer;

    Uczen() {
        imie = "Nieznane";
        nazwisko = "Nieznane";
        klasa = "Nieznana";
        grupa = "Nieznana";
        numer = 0;
    }

    Uczen(string im, string naz, string kl, string gr, int num) {
        imie = im;
        nazwisko = naz;
        klasa = kl;
        grupa = gr;
        numer = num;
    }

    void wyswietlDane() {
        cout << "Imie: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Klasa: " << klasa << endl;
        cout << "Grupa: " << grupa << endl;
        cout << "Numer w dzienniku: " << numer << endl;
    }
};

int main() {
    string imie, nazwisko, klasa, grupa;
    int numer;

    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << "Podaj klase: ";
    cin >> klasa;
    cout << "Podaj grupe: ";
    cin >> grupa;
    cout << "Podaj numer w dzienniku: ";
    cin >> numer;

    Uczen uczen(imie, nazwisko, klasa, grupa, numer);

    cout << "\nDane ucznia:" << endl;
    uczen.wyswietlDane();

    return 0;
}
*/

/*
//zadanie2
class Prostopadloscian {
public:
    double dlugosc;
    double szerokosc;
    double wysokosc;
    
    Prostopadloscian() {
        dlugosc = 1.0;
        szerokosc = 1.0;
        wysokosc = 1.0;
    }
    
    Prostopadloscian(double d, double s, double w) {
        dlugosc = d;
        szerokosc = s;
        wysokosc = w;
    }

    double obliczObjetosc() {
        return dlugosc * szerokosc * wysokosc;
    }
    
    double obliczPoleBoczne() {
        return 2 * (dlugosc * wysokosc + szerokosc * wysokosc);
    }
    
    double obliczSumeKrawedzi() {
        return 4 * (dlugosc + szerokosc + wysokosc);
    }

    void wyswietlDane() {
        cout << "Objetosc: " << obliczObjetosc() << " jednostek szesciennych" << endl;
        cout << "Pole powierzchni bocznej: " << obliczPoleBoczne() << " jednostek kwadratowych" << endl;
        cout << "Suma dlugosci krawedzi: " << obliczSumeKrawedzi() << " jednostek" << endl;
    }
};

int main() {
    double dlugosc, szerokosc, wysokosc;
    
    cout << "Podaj dlugosc: ";
    cin >> dlugosc;
    cout << "Podaj szerokosc: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc: ";
    cin >> wysokosc;
    
    Prostopadloscian prostopadloscian(dlugosc, szerokosc, wysokosc);
    
    cout << "\nWyniki obliczen:" << endl;
    prostopadloscian.wyswietlDane();
    
    return 0;
}
*/

/*
//zadanie 3
class Prostokat {
public:
    double dlugosc;
    double szerokosc;

    Prostokat() {
        dlugosc = 1.0;
        szerokosc = 1.0;
    }

    Prostokat(double d, double s) {
        dlugosc = d;
        szerokosc = s;
    }

    double obliczPole() {
        return dlugosc * szerokosc;
    }

    double obliczObwod() {
        return 2 * (dlugosc + szerokosc);
    }

    void wyswietlDane() {
        cout << "Pole powierzchni: " << obliczPole() << " jednostek kwadratowych" << endl;
        cout << "Obwod: " << obliczObwod() << " jednostek" << endl;
    }
};

int main() {
    double dlugosc, szerokosc;

    cout << "Podaj dlugosc pokoju: ";
    cin >> dlugosc;
    cout << "Podaj szerokosc pokoju: ";
    cin >> szerokosc;

    Prostokat pokoj(dlugosc, szerokosc);

    cout << "\nWyniki obliczen:" << endl;
    pokoj.wyswietlDane();

    return 0;
}
*/

/*
//zadanie 4
class PrzeliczenieDlugosci {
private:
    double dlugosc;
    string jednostka;

public:
    PrzeliczenieDlugosci() {
        cout << "Domyslna jednostka to metry." << endl;
        dlugosc = 0.0;
        jednostka = "m";
    }

    PrzeliczenieDlugosci(double d, string j) : dlugosc(d), jednostka(j) {
        cout << "Przeliczanie " << dlugosc << " " << jednostka << " na metry." << endl;
        przeliczNaMetry();
    }

    void przeliczNaMetry() {
        if (jednostka == "cale") {
            dlugosc *= 0.0254;
        } else if (jednostka == "stopy") {
            dlugosc *= 0.3048;
        } else if (jednostka == "jardy") {
            dlugosc *= 0.9144;
        } else if (jednostka == "mile") {
            dlugosc *= 1609.34;
        }
        jednostka = "m";
    }

    void wyswietlDlugosc() {
        cout << "Dlugosc w metrach: " << dlugosc << " " << jednostka << endl;
    }
};

int main() {
    double dlugosc;
    string jednostka;

    cout << "Podaj dlugosc: ";
    cin >> dlugosc;
    cout << "Podaj jednostke (cale, stopy, jardy, mile): ";
    cin >> jednostka;

    PrzeliczenieDlugosci przeliczenie(dlugosc, jednostka);

    przeliczenie.wyswietlDlugosc();

    return 0;
}
*/

/*
//zadanie 5
class Samochod {
private:
    string marka;
    string model;
    int rok_produkcji;
    double cena;
    string numer_rejestracyjny;
    struct DataRejestracji {
        int dzien;
        int miesiac;
        int rok;
    } data_rejestracji;

public:
    Samochod() {
        marka = "Nieznana";
        model = "Nieznany";
        rok_produkcji = 0;
        cena = 0.0;
        numer_rejestracyjny = "Brak";
        data_rejestracji = {1, 1, 2000};
    }

    Samochod(string m, string mo, int rp, double c, string nr, int dz, int ms, int r) {
        marka = m;
        model = mo;
        rok_produkcji = rp;
        cena = c;
        numer_rejestracyjny = nr;
        data_rejestracji = {dz, ms, r};
    }

    void wyswietlDane() {
        cout << "Marka: " << marka << endl;
        cout << "Model: " << model << endl;
        cout << "Rok produkcji: " << rok_produkcji << endl;
        cout << "Cena: " << cena << " PLN" << endl;
        cout << "Numer rejestracyjny: " << numer_rejestracyjny << endl;
        cout << "Data pierwszej rejestracji: " << data_rejestracji.dzien << "/" << data_rejestracji.miesiac << "/" << data_rejestracji.rok << endl;
    }
};

int main() {
    string marka, model, numer_rejestracyjny;
    int rok_produkcji, dzien, miesiac, rok;
    double cena;

    cout << "Podaj marke: ";
    cin >> marka;
    cout << "Podaj model: ";
    cin >> model;
    cout << "Podaj rok produkcji: ";
    cin >> rok_produkcji;
    cout << "Podaj cene: ";
    cin >> cena;
    cout << "Podaj numer rejestracyjny: ";
    cin >> numer_rejestracyjny;
    cout << "Podaj date pierwszej rejestracji (dzien miesiac rok): ";
    cin >> dzien >> miesiac >> rok;

    Samochod samochod(marka, model, rok_produkcji, cena, numer_rejestracyjny, dzien, miesiac, rok);

    samochod.wyswietlDane();

    return 0;
}
*/

/*
//zadanie 6
class Odleglosc {
private:
    struct Punkt {
        double x;
        double y;
    } p1, p2;

public:
    Odleglosc() {
        p1 = {0.0, 0.0};
        p2 = {0.0, 0.0};
    }

    Odleglosc(double x1, double y1, double x2, double y2) {
        p1 = {x1, y1};
        p2 = {x2, y2};
    }

    double obliczOdleglosc() {
        return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    }

    void wyswietlDane() {
        cout << "Odleglosc miedzy punktami: " << obliczOdleglosc() << " jednostek" << endl;
    }
};

int main() {
    double x1, y1, x2, y2;

    cout << "Podaj pierwsze x: ";
    cin >> x1;
    cout << "Podaj pierwsze y: ";
    cin >> y1;
    cout << "Podaj drugie x: ";
    cin >> x2;
    cout << "Podaj drugie y: ";
    cin >> y2;

    Odleglosc odleglosc(x1, y1, x2, y2);
    
    odleglosc.wyswietlDane();
    
    return 0;
}
*/