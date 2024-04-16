// Zrobił: Maciek Klima
#include <iostream>
using namespace std;
class Firma {
public:
	virtual void ileZaplacic() = 0;
};// klasa abstrakcyjna
class Handlowiec : public Firma {
private:
	string name;
	int stawka;

public:
	Handlowiec(string name, int stawka ) {
		this->name = name;
		this->stawka = stawka;
	}
	void ileZaplacic() {
		cout << "To jest handlowiec " << this->name << endl;
		cout << "Stawka: " << this->stawka << endl;
		cout << "Trzeba mu dac z wliczonym vatem: " << this->stawka * 40 * 4 * 1.22 << endl;
		cout << "Trzeba mu dac bez vatu: " << this->stawka * 40 * 4 << endl;
	}
}; // klasa pochodna w polimorfizmie dziedzizy po Firmie 
class Programista : public Firma {
private:
	string name;
	int stawka;

public:
	Programista(string name, int stawka) {
		this->name = name;
		this->stawka = stawka;
	}
	void ileZaplacic() {
		cout << "To jest programista " << this->name << endl;
		cout << "Stawka: " << this->stawka << endl;
		cout << "Trzeba mu dac z wliczonym vatem: " << this->stawka * 40 * 4 * 1.22 << endl;
		cout << "Trzeba mu dac bez vatu: " << this->stawka * 40 * 4 << endl;
	}
}; // klasa pochodna w polimorfizmie dziedzizy po Firmie 
class Kierownik : public Firma {
private:
	string name;
	int stawka;

public:
	Kierownik(string name, int stawka) {
		this->name = name;
		this->stawka = stawka;
	}
	void ileZaplacic() {
		cout << "To jest kierownik " << this->name << endl;
		cout << "Stawka: " << this->stawka << endl;
		cout << "Trzeba mu dac z wliczonym vatem: " << this->stawka * 40 * 4 * 1.22 << endl;
		cout << "Trzeba mu dac bez vatu: " << this->stawka * 40 * 4 << endl;
	}
}; // klasa pochodna w polimorfizmie dziedzizy po Firmie 
class Pracownik : public Firma {
private:
	string name;
	int stawka;

public:
	Pracownik(string name, int stawka) {
		this->name = name;
		this->stawka = stawka;
	}
	void ileZaplacic() {
		cout << "To jest pracownik " << this->name << endl;
		cout << "Stawka: " << this->stawka << endl;
		cout << "Trzeba mu dac z wliczonym vatem: " << this->stawka * 40 * 4 * 1.22 << endl;
		cout << "Trzeba mu dac bez vatu: " << this->stawka * 40 * 4 << endl;
	}
}; //klasa pochodna w polimorfizmie dziedzizy po Firmie 

int main()
{
	
	setlocale(LC_ALL, "");
	cout << "Polimorfizm z uzyciem funckji parametru\n";
	string name;
	int n;  
	cout << "Podaj stawke: ";  cin >> n; // uzytkownik wprowadza stawke
	cout << "Podaj imie pracownika: "; cin >> name;
	Firma* wskaznik;
	Handlowiec handlowiec(name, n );
	Programista programista(name, n );
	Kierownik kierownik(name, n);
	Pracownik pracownik(name, n);
	int menu;

	cout << "1-Handlowiec,2-Programista,3-Kierwonik,4-Pracownik, inne-brak "; cin >> menu; // pokazywanie uzytkownikowi ktoremu pracownikowi 
	// chce przypisac stawke ktora podal

	switch (menu)					// wybory pracownikow
	{
	case 1:							// jesli uzytkownik wybral handlowca
		wskaznik = &handlowiec;
		wskaznik->ileZaplacic();
		break;
	case 2:							// jesli uzytkownik wybral programiste
		wskaznik = &programista;
		wskaznik->ileZaplacic();
		break;
	case 3:							// jesli uzytkownik wybral kierownika
		wskaznik = &kierownik;
		wskaznik->ileZaplacic();
		break;
	case 4:							// jesli uzytkownik wybral pracownika
		wskaznik = &pracownik;
		wskaznik->ileZaplacic();
		break;
	default:
		cout << "Nie ma takiego pracownika " << endl;
	}


	return EXIT_SUCCESS;
}