
#include <iostream>
using namespace std;
class Pojazdy {
public:
	string name_p;
	void prezentacjaPojazdy(){
		cout << "nazwa pojazdu: " << this->name_p << endl;
	}
};
class Samochody :public Pojazdy {
public:
	string name_s;
	void prezentacjaSamochody() {
		cout << "Nazwa samochodu: " << this->name_s << endl;
	}
};
class Rolnicze:public Samochody {
	public:
		string name_r;
		void prezentacjaRolnicze() {
			cout << "nazwa pojazdu rolniczego: " << this->name_r << endl;
			}
};
int main()
{
	Rolnicze rol;
	rol.name_p = "Bizon";
	rol.name_s = "szybki Bizon";
	rol.name_r = "wies droga na bizona";
	rol.prezentacjaPojazdy();
	rol.prezentacjaSamochody();
	rol.prezentacjaRolnicze();
	return EXIT_SUCCESS;
}
