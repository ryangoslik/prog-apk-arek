#include <string>
#include <iostream>

using namespace std;

class Silnik {
public:
    int moc;
    int pojemnosc;
    Silnik() : moc(0), pojemnosc(0) {};
    Silnik(const int& m, const int& p) {
        this->moc = m;
        this->pojemnosc = p;
    }
    void Wyswietl() {
        cout << "Moc: " << moc << "  Pojemnosc: " << pojemnosc << endl;
    }
};

class Samochod {
public:
    string marka;
    string model;
    Silnik silnik;
    Samochod(const string& ma, const string& mo, const Silnik& s) {
        this->marka = ma;
        this->model = mo;
        this->silnik = s;
    }
    void Wyswietl() {
        cout << "Marka: " << marka << "  model: " << model << endl;
    }
};


int main()
{
    Silnik silnik(155, 1999);
    Samochod samochod("Audi", "A5", silnik);
    silnik.Wyswietl();
    samochod.Wyswietl();
}

