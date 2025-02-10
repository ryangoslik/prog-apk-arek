#include <iostream>

using namespace std;

class Prostopadloscian {
private:
    double dlugosc, szerokosc, wysokosc;

public:
    Prostopadloscian(double d, double s, double w) : dlugosc(d), szerokosc(s), wysokosc(w) {}

    double objetosc() {
        return dlugosc * szerokosc * wysokosc;
    }

    double pole_calkowite() {
        return 2 * (dlugosc * szerokosc + dlugosc * wysokosc + szerokosc * wysokosc);
    }

    double suma_krawedzi() {
        return 4 * (dlugosc + szerokosc + wysokosc);
    }
};

int main() {
    double dlugosc, szerokosc, wysokosc;
    cout << "Podaj dlugosc prostopadloscianu: ";
    cin >> dlugosc;
    cout << "Podaj szerokosc prostopadloscianu: ";
    cin >> szerokosc;
    cout << "Podaj wysokosc prostopadloscianu: ";
    cin >> wysokosc;

    Prostopadloscian prostopadloscian(dlugosc, szerokosc, wysokosc);
    cout << "Objetosc: " << prostopadloscian.objetosc() << endl;
    cout << "Pole powierzchni calkowitej: " << prostopadloscian.pole_calkowite() << endl;
    cout << "Suma dlugosci krawedzi: " << prostopadloscian.suma_krawedzi() << endl;

    /*
    
    class Uczen {
    private:
        string imie, nazwisko, data_urodzenia, klasa, grupa;
    public:
        Uczen(string i, string n, string d, string k, string g) : imie(i), nazwisko(n), data_urodzenia(d), klasa(k), grupa(g) {}
        void wyswietl_dane() {
            cout << "Imie: " << imie << endl;
            cout << "Nazwisko: " << nazwisko << endl;
            cout << "Data urodzenia: " << data_urodzenia << endl;
            cout << "Klasa: " << klasa << endl;
            cout << "Grupa: " << grupa << endl;
        }
     };
    
     string imie, nazwisko, data_urodzenia, klasa, grupa;
     cout << "Podaj imie ucznia: ";
     cin >> imie;
     cout << "Podaj nazwisko ucznia: ";
     cin >> nazwisko;
     cout << "Podaj date urodzenia ucznia: ";
     cin >> data_urodzenia;
     cout << "Podaj klase ucznia: ";
     cin >> klasa;
     cout << "Podaj grupe ucznia: ";
     cin >> grupa;
    
     Uczen uczen(imie, nazwisko, data_urodzenia, klasa, grupa);
     uczen.wyswietl_dane();

    return 0;
    */
}
