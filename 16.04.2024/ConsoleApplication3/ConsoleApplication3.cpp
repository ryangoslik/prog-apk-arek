#include <iostream>
using namespace std;
class Szef {                                                                   // Klasa abstrakcyjna
public:
	virtual void ileZaplacic() = 0;
};


class Handlowiec : public Szef {
private:
	string name;
	int stawka;

public:
	Handlowiec(string name, int stawka) {                                      // Klasa pochodna w polimorfizmie dziedzizy po "Szef" 
		this->name = name;
		this->stawka = stawka;
	}
	void ileZaplacic() {
		cout << "To jest pracownik handlowiec " << this->name << endl;
		cout << "Stawka: " << this->stawka << endl;
		cout << "Trzeba wyplacic: " << this->stawka * 40 * 4 << endl;
	}
};

class Programista : public Szef {
private:
	string name;
	int stawka;

public:
	Programista(string name, int stawka) {                                    // Klasa pochodna w polimorfizmie dziedzizy po "Szef" 
		this->name = name;
		this->stawka = stawka;
	}
	void ileZaplacic() {
		cout << "To jest programista " << this->name << endl;
		cout << "Stawka: " << this->stawka << endl;
		cout << "Trzeba wyplacic: " << this->stawka * 40 * 4 << endl;
	}
};

		class Kierownik : public Szef {
		private:
			string name;
			int stawka;

		public:
			Kierownik(string name, int stawka) {                             // Klasa pochodna w polimorfizmie dziedzizy po "Szef"
				this->name = name;
				this->stawka = stawka;                                    
			}
			void ileZaplacic() {
				cout << "To jest kierownik " << this->name << endl;                    
				cout << "Stawka: " << this->stawka << endl;
				cout << "Trzeba wyplacic: " << this->stawka * 40 * 4 << endl;
			}
		}; 


	class Pracownik : public Szef {
	private:
		string name;
		int stawka;

	public:
		Pracownik(string name, int stawka) {                                  //Klasa pochodna w polimorfizmie dziedzizy po "Szef"  
			this->name = name;
			this->stawka = stawka;
	}
		void ileZaplacic() {
			cout << "To jest pracownik " << this->name << endl;
			cout << "Stawka: " << this->stawka << endl;
			cout << "Trzeba wyplacic: " << this->stawka * 40 * 4 << endl;
	}
	}; 
int main()
{
	setlocale(LC_ALL, "");
	string name;
	int n;
	int menu;
	cout << "1-Handlowiec | 2-Programista | 3-Kierwonik | 4-Pracownik |  inne-NSicosc... "; cin >> menu;		// pokazywanie uzytkownikowi ktoremu pracownikowi 
	cout << "Podaj stawke pracownika w zlotowkach: ";  cin >> n;														// uzytkownik wprowadza stawke danego pracownika
	cout << "Podaj imie danego pracownika: "; cin >> name;
	Szef* wskaznik;
	Handlowiec handlowiec(name, n);
	Programista programista(name, n);
	Kierownik kierownik(name, n);
	Pracownik pracownik(name, n);

	switch (menu)										// wybor pracownika za pomoca switch case
	{
	case 1:												// handlowiec
		wskaznik = &handlowiec;
		wskaznik->ileZaplacic();
		break;
	case 2:												// programista
		wskaznik = &programista;
		wskaznik->ileZaplacic();
		break;
	case 3:												// kierownik
		wskaznik = &kierownik;
		wskaznik->ileZaplacic();
		break;
	case 4:												// pracownik
		wskaznik = &pracownik;
		wskaznik->ileZaplacic();
		break;
	default:
		cout << "Nicosc... " << endl;
	}
	return EXIT_SUCCESS;
}