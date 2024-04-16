#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

class Postac {
public:
    virtual void opisPostaci() = 0;
    virtual void walka() = 0;
    virtual void umiejetnosci() = 0;
   
};//Klasa abstrakcyjna


class Szturmowiec :public Postac {
private:
    string name;
    string div;
    string bron;
    int hp;
    int armor;
    int sila;
public:
    Szturmowiec(string name, string div, string bron, int hp = 110, int armor = 80, int sila = 120) {
        this->name = name;
        this->div = div;
        this->bron = bron;
        this->hp = hp;
        this->armor = armor;
        this->sila = sila;
    }
    void opisPostaci() {
        cout << "To jest szturmowiec " << this->name << endl;
        cout << "Dywizja do ktorej nalezy: " << this->div << endl;
        cout << "Bron: " << this->bron << endl;
        cout << "Punkty wytrzymalosci: " << this->hp << endl;
        cout << "Punkty pancerza: " << this->armor << endl;
        cout << "Sila: " << this->sila << endl;
    }
    void walka() {
        cout << "Blaster sredniego zasiegu" << endl;
    }
    void umiejetnosci() {
        cout << "Detonator termiczny" << endl;
        cout << "Ladunek jonowy" << endl;
        cout << "Granat ogluszajacy" << endl;
    }
};//Klasa pochodna w polimorfizmie dziedziczy po abs Ksztalt.

class Wsparcie :public Postac {
private:
    string name;
    string div;
    string bron;
    int hp;
    int armor;
    int sila;
public:
    Wsparcie(string name, string div, string bron, int hp = 130, int armor = 100, int sila = 130) {
        this->name = name;
        this->div = div;
        this->bron = bron;
        this->hp = hp;
        this->armor = armor;
        this->sila = sila;
    }
    void opisPostaci() {
        cout << "To jest zolniez wsparcia " << this->name << endl;
        cout << "Dywizja do ktorej nalezy: " << this->div << endl;
        cout << "Bron: " << this->bron << endl;
        cout << "Punkty wytrzymalosci: " << this->hp << endl;
        cout << "Punkty pancerza: " << this->armor << endl;
        cout << "Sila: " << this->sila << endl;
    }
    void walka() {
        cout << "Ciezki szybkostrzelny blaster" << endl;
    }
    void umiejetnosci() {
        cout << "Ciezkie dzialko straznicze" << endl;
        cout << "Laduneki przeciwpancerne" << endl;
        cout << "Skrzynia z amunicja" << endl;
    }
};//Klasa pochodna w polimorfizmie dziedziczy po abs Ksztalt.

class Strzelec :public Postac {
private:
    string name;
    string div;
    string bron;
    int hp;
    int armor;
    int sila;
public:
    Strzelec(string name, string div, string bron, int hp = 100, int armor = 70, int sila = 115) {
        this->name = name;
        this->div = div;
        this->bron = bron;
        this->hp = hp;
        this->armor = armor;
        this->sila = sila;
    }
    void opisPostaci() {
        cout << "To jest strzelec " << this->name << endl;
        cout << "Dywizja do ktorej nalezy: " << this->div << endl;
        cout << "Bron: " << this->bron << endl;
        cout << "Punkty wytrzymalosci: " << this->hp << endl;
        cout << "Punkty pancerza: " << this->armor << endl;
        cout << "Sila: " << this->sila << endl;
    }
    void walka() {
        cout << "Blaster snajperski" << endl;
    }
    void umiejetnosci() {
        cout << "Lornetka termowizyjna" << endl;
        cout << "Skan pola walki" << endl;
        cout << "Pole siłowe" << endl;
    }
};//Klasa pochodna w polimorfizmie dziedziczy po abs Ksztalt.

class Zwiadowca :public Postac {
private:
    string name;
    string div;
    string bron;
    int hp;
    int armor;
    int sila;
public:
    Zwiadowca(string name, string div, string bron, int hp = 100, int armor = 60, int sila = 95) {
        this->name = name;
        this->div = div;
        this->bron = bron;
        this->hp = hp;
        this->armor = armor;
        this->sila = sila;
    }
    void opisPostaci() {
        cout << "To jest zwiadowca " << this->name << endl;
        cout << "Dywizja do ktorej nalezy: " << this->div << endl;
        cout << "Bron: " << this->bron << endl;
        cout << "Punkty wytrzymalosci: " << this->hp << endl;
        cout << "Punkty pancerza: " << this->armor << endl;
        cout << "Sila: " << this->sila << endl;
    }
    void walka() {
        cout << "Blaster sredniego zasiegu" << endl;
    }
    void umiejetnosci() {
        cout << "Pole zaklucajace" << endl;
        cout << "Skan przeciwnika" << endl;
        cout << "Ladunki jonowe" << endl;
    }
};//Klasa pochodna w polimorfizmie dziedziczy po abs Ksztalt.

int main()
{
    setlocale(LC_ALL, "");
    Postac* wskaznik;
    Szturmowiec szturmowiec("CT - 5555", "501", "DC-15");
    Wsparcie wsparcie("CT - 2871", "104", "DC-15A");
    Strzelec strzelec("CT - 1255", "212", "Valken - 38X");
    Zwiadowca zwiadowca("CT - 1113", "212", "DC-15");

    int menu;
    
    cout << "1-Szturmowiec, 2-Wsparcie, 3-Strzelec, 4-Zwiadowca, inne-brak "; cin >> menu;
    switch (menu) {
    case 1:
        wskaznik = &szturmowiec;
        wskaznik->opisPostaci();
        cout << "Wyposażenie:" << endl;
        wskaznik->walka();
        wskaznik->umiejetnosci();
        break;
    case 2:
        wskaznik = &wsparcie;
        wskaznik->opisPostaci();
        cout << "Wyposażenie:" << endl;
        wskaznik->walka();
        wskaznik->umiejetnosci();
        break;
    case 3:
        wskaznik = &strzelec;
        wskaznik->opisPostaci();
        cout << "Wyposażenie:" << endl;
        wskaznik->walka();
        wskaznik->umiejetnosci();
        break;
    case 4:
        wskaznik = &zwiadowca;
        wskaznik->opisPostaci();
        cout << "Wyposażenie:" << endl;
        wskaznik->walka();
        wskaznik->umiejetnosci();
        break;
    default:
        cout << "Nicosc..." << endl;
    }



    return EXIT_SUCCESS;
}
