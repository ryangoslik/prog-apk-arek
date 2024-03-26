
#include <iostream>
using namespace std;
class Czlowiek {
public:
	string imie;
	string nazwisko;
	void prezentacjaCzlowieka() {
		cout << "imie i nazwisko: " << this->imie << " " << this->nazwisko << endl;
	}
};
class Flegmatyk:public Czlowiek {
public:
		string cecha1;
		string cecha2;
		string cecha3;
		void przentacjaFlegmatyka() {
			cout << "cecha nr1: " << this->cecha1 << endl;
			cout << "cecha nr2: " << this->cecha2 << endl;
			cout << "cecha nr3: " << this->cecha3 << endl;
		}
};
class Choleryk:public Czlowiek {
public:
	string cecha1;
	string cecha2;
	string cecha3;
	void przentacjaCholeryka() {
		cout << "cecha nr1: " << this->cecha1 << endl;
		cout << "cecha nr2: " << this->cecha2 << endl;
		cout << "cecha nr3: " << this->cecha3 << endl;
	}
};
class Sangwinik:public Czlowiek {
public:
	string cecha1;
	string cecha2;
	string cecha3;
	void przentacjaSangwinika() {
		cout << "cecha nr1: " << this->cecha1 << endl;
		cout << "cecha nr2: " << this->cecha2 << endl;
		cout << "cecha nr3: " << this->cecha3 << endl;
	}
};
class Melancholik:public Czlowiek {
public:
	string cecha1;
	string cecha2;
	string cecha3;
	void przentacjaMelancholika() {
		cout << "cecha nr1: " << this->cecha1 << endl;
		cout << "cecha nr2: " << this->cecha2 << endl;
		cout << "cecha nr3: " << this->cecha3 << endl;
	}
};

int main()
{
	string imie, nazwisko;
	int typOsobowosci;
	cout << "podaj imie: "; cin >> imie;
	cout << "podaj nazwisko: "; cin >> nazwisko;
	cout << "podaj typ osobosowsci od 1 do 4: "; cin >> typOsobowosci;

	Choleryk czlowiek1;
	Flegmatyk czlowiek2;
	Sangwinik czlowiek3;
	Melancholik czlowiek4;

	switch (typOsobowosci)
	{
	case 1:

		czlowiek1.cecha1 = "Szybkość rozmowy: 3";
		czlowiek1.cecha2 = "Bycie sigma: 3";
		czlowiek1.cecha3 = "Umiejętności w Tom Clancy's Rainbow Six Siege: 3 (champ)";
		czlowiek1.prezentacjaCzlowieka();
		czlowiek1.przentacjaCholeryka();
		break;

	case 2:
		czlowiek2.cecha1 = "Szybkość rozmowy: 1";
		czlowiek2.cecha2 = "Bycie sigma: ligma (poza minusową skalą)";
		czlowiek2.cecha3 = "Umiejętności w Tom Clancy's Rainbow Six Siege: 1 (Cobblestone V)";
		czlowiek2.prezentacjaCzlowieka();
		czlowiek2.przentacjaFlegmatyka();
		break;

	case 3:
		czlowiek3.cecha1 = "Szybkość rozmowy: 2";
		czlowiek3.cecha2 = "Bycie sigma: 2";
		czlowiek3.cecha3 = "Umiejętności w Tom Clancy's Rainbow Six Siege: 2.5 (Gold I)";
		czlowiek3.prezentacjaCzlowieka();
		czlowiek3.przentacjaSangwinika();
		break;

	case 4:
		czlowiek4.cecha1 = "Szybkość rozmowy: nwm";
		czlowiek4.cecha2 = "Bycie sigma: sikla";
		czlowiek4.cecha3 = "Umiejętności w Tom Clancy's Rainbow Six Siege: 2 (bronze II)";
		czlowiek4.prezentacjaCzlowieka();
		czlowiek4.przentacjaMelancholika();
		break;

	default:
		cout << "brak osobowości (Tyler Durden)";
		break;
	}
	return EXIT_SUCCESS;
}