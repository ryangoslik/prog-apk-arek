
#include <iostream>
using namespace std;

class Postac {
public:
    virtual void prezentacjaPostaci() = 0;
};

class DroidB1 :public Postac {
public:
    virtual void prezentacjaPostaci() {
        cout << "Separatysci, podstawowa jednostka" << endl;
    };
};

class DroidB2 :public Postac {
public:
    virtual void prezentacjaPostaci() {
        cout << "Separatysci, pancerz, ciezkie wyposazenie" << endl;
    };
};

class Droideka :public Postac {
public:
    virtual void prezentacjaPostaci() {
        cout << "Separatysci specialisci, ciezkie wyposazenie" << endl;
    };
};

class DroidCommando :public Postac {
public:
    virtual void prezentacjaPostaci() {
        cout << "Separatysci, specialne jednostki" << endl;
    };
};

void krainaPostaci(Postac& ob) {
    ob.prezentacjaPostaci();
}

int main()
{

    DroidB1 b;
    DroidB2 a;
    Droideka dr;
    DroidCommando bx;

    cout << "Droid bojowy B1" << endl;
    krainaPostaci(b);

    cout << "Droid bojowy B2" << endl;
    krainaPostaci(a);

    cout << "Droid bojowy droideka" << endl;
    krainaPostaci(dr);

    cout << "Droid bojowy BX" << endl;
    krainaPostaci(bx);
    return EXIT_SUCCESS;
}

