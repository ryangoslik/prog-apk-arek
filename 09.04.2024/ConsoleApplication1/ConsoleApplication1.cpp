
#include <iostream>
using namespace std;

class Ksztalt{
public:
    virtual void oblicz() = 0;
};

class Trojkat:public Ksztalt {
public:
    virtual void oblicz() {
        cout << "obliczam trojkat" << endl;
    };
};

class Prostokat:public Ksztalt {
public:
    virtual void oblicz() {
        cout << "obliczam Prostokat" << endl;
    };
};

class Kwadrat:public Ksztalt {
public:
    virtual void oblicz() {
        cout << "obliczam Kwadrat" << endl;
    };
};

class Kolo:public Ksztalt{
public:
    virtual void oblicz() {
        cout << "obliczam Kolo" << endl;
    };
};

int main()
{
    Ksztalt* wsk;
    Trojkat tr;
    Prostokat pr;
    Kwadrat kw;
    Kolo kol;

    cout << "Teraz Trojkat chopie..." << endl;
    wsk = &tr;
    wsk->oblicz();

    cout << "Teraz Prostokat chopie..." << endl;
    wsk = &pr;
    wsk->oblicz();

    cout << "Teraz kwadrat chopie..." << endl;
    wsk = &kw;
    wsk->oblicz();

    cout << "Teraz kolo chopie..." << endl;
    wsk = &kol;
    wsk->oblicz();
    return EXIT_SUCCESS;
}

