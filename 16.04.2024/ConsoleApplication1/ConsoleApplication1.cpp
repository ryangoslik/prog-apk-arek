#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

    class Ksztalt{
        public:
         virtual void opis() = 0;
         virtual void pole() = 0;
};//Klasa abstrakcyjna


class Kolo :public Ksztalt {
private:
    int r;
    const string NAME = "KSZTALT KOLO";

public:
    Kolo(int promien) {
        this->r = promien;
    }
    void opis() {
        cout << "To jest " << this->NAME << endl;
    }
    void pole() {
        cout << "Wynik poleKola = " << M_PI * pow(r, 2) << endl;
    }

};//Klasa pochodna w polimorfizmie dziedziczy po abs Ksztalt.

class Kwadrat :public Ksztalt {
private:
    int a;
    const string NAME = "KSZTALT KWADRAT";

public:
    Kwadrat(int bok) {
        this->a = bok;
    }
    void opis() {
        cout << "To jest " << this->NAME << endl;
    }
    void pole() {
        cout << "Wynik poleKwadratu = " << pow(a, 2) << endl;
    }
};//Klasa pochodna w polimorfizmie dziedziczy po abs Ksztalt.

class Prostokat :public Ksztalt {
private:
    int a;
    int b;
    const string NAME = "KSZTALT PROSTOKAT";

public:
    Prostokat(int bok1, int bok2) {
        this->a = bok1;
        this->b = bok2;
    }
    void opis() {
        cout << "To jest " << this->NAME << endl;
    }
    void pole() {
        cout << "Wynik poleProstokata = " << this->a * this->b << endl;
    }
};//Klasa pochodna w polimorfizmie dziedziczy po abs Ksztalt.

class Romb :public Ksztalt {
private:
    int a;
    int h;
    const string NAME = "KSZTALT ROMB";

public:
    Romb(int bok, int wysokosc) {
        this->a = bok;
        this->h = wysokosc;
    }
    void opis() {
        cout << "To jest " << this->NAME << endl;
    }
    void pole() {
        cout << "Wynik poleRombu = " << this->a * this->h << endl;
    }
};//Klasa pochodna w polimorfizmie dziedziczy po abs Ksztalt.

void przelaczObiekt(Ksztalt& ob) {
    ob.opis();
    ob.pole();
}

int main()
{
    cout << "Polimorfizm z uzyciem funkcji z parametrem\n";

    int menu;
    Kolo k(3); Kwadrat kw(5); Prostokat pr(3,4); Romb rb(2,4);
    cout << "1-kolo, 2-kwadrat, 3-prostokat, 4-romb, inne-brak "; cin >> menu;
    switch (menu) {
        case 1:
            przelaczObiekt(k);
            break;
        case 2:
            przelaczObiekt(kw);
            break;
        case 3:
            przelaczObiekt(pr);
            break;
        case 4:
            przelaczObiekt(rb);
            break;
        default:
            cout << "Nicosc" << endl;
    }



    return EXIT_SUCCESS;
}
