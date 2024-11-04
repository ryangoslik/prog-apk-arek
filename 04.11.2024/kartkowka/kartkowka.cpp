#include <string>
#include <iostream>

using namespace std;

class Chapter{
public:
    string tytul;
    int l_stron;
    Chapter() : tytul(""), l_stron(0) {};
    Chapter(const string& t, const int& l) {
        this->tytul = t;
        this->l_stron = l;
    }
    void Wyswietl() {
        cout << "Tytul rozdzialu: " << tytul << "  liczba stron: " << l_stron << endl;
    }
};

class Book {
public:
    string tytul;
    string autor;
    int l_rozdzialow;
    Chapter chapter;
    Book(const string& t, const string& a, const int l_roz, Chapter& c) {
        this->tytul = t;
        this->autor = a;
        this->l_rozdzialow = l_roz;
        this->chapter = c;
    }
    void Wyswietl() {
        cout << "Tytul ksiazki: " << tytul << "  Autor: " << autor << "  liczba rozdzialow: " << l_rozdzialow << endl;
    }
};

int main()
{
    Chapter chapter("Rozdzial1", 100);
    Book book("Fajna ksiazka", "Fajny Autor", 10, chapter);

    chapter.Wyswietl();
    book.Wyswietl();
}

