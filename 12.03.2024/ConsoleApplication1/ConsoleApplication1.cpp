#include <iostream>
using namespace std;

class Pojazdy {
private:
    string name;
public:
    Pojazdy(string n) {
        this->name = n;
    }
    void prezentacjaPojazdu() {
        cout << "Prezentacja pojazdu: " << this->name << endl;
    }
};

class Samochody : public Pojazdy{
private:
    string marka;
    string nazwa;
public:
    Samochody(string m, string n):Pojazdy(n) {
        this->marka = m;
        this->nazwa = n;
    }
    void prezentacjaSamochodu() {
        cout << "Prezentacja samochodu: " << this->marka << endl;
        cout << "Nazwa pojazdu: " << this-> nazwa << endl;
    }
};

int main()
{
    Samochody vw = Samochody("Volkswagen", "Passat 1.9TDI");
    vw.prezentacjaPojazdu();
    vw.prezentacjaSamochodu();
    return EXIT_SUCCESS;
}