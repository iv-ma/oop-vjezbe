#include <iostream>
#include <string>
#include <vector>

#ifndef BOOK-TEST.H
#define BOOK-TEST.H


using namespace std;


class Book
{
protected:
    string autor;
    string naslov_knjige;
    int godina_izdanja;

public:
    Book();

    Book(string ime, string naslov)
    {
        autor = ime;
        naslov_knjige = naslov;
    }

    void postavi_autora(string ime)
    {
        autor = ime;
    };

    string vrati_autora()
    {
        return autor;
    };

    void postavi_naslov(string naslov)
    {
        naslov_knjige = naslov;
    };

    string vrati_naslov()
    {
        return naslov_knjige;
    };

    void postavi_godinu(int godina)
    {
        godina_izdanja = godina;
    };

    virtual double vrati_velicinu() = 0;
};


class HardCopyBook : public Book
{
private:
    int broj_stranica_knjige;

public:
    HardCopyBook();

    HardCopyBook(string ime, string naslov,int broj_stranica) : Book(ime, naslov)
    {
        broj_stranica_knjige = broj_stranica;
    };

    void postavi_broj_stranica(int broj_stranica)
    {
        broj_stranica_knjige = broj_stranica;
    };

    double vrati_velicinu() override
    {
        return broj_stranica_knjige;
    };
};


class EBook : public Book
{
private:
    string ime_datoteke;
    double velicina_knjige;

public:
    EBook();
    EBook(string ime, string naslov, double velicina) : Book(ime, naslov)
    {
        velicina_knjige = velicina;
    };

    void postavi_velicinu(double velicina)
    {
        velicina_knjige = velicina;
    };

    double vrati_velicinu()override
    {
        return velicina_knjige;
    };
    void postavi_ime_datoteke(string naziv_datot)
    {
        ime_datoteke = naziv_datot;
    };
    string vrati_ime_datoteke()
    {
        return ime_datoteke;
    };
};


class Library
{
private:
    vector <Book*> biblioteka;

public:
    void popuni(Book* knjiga)
    {
        biblioteka.push_back(knjiga);
    };
    Book* vrati_knjigu(int brojac)
    {
      return biblioteka[brojac];
    };
    ~Library(){biblioteka.clear();};
    vector<string> vrati_naslove(string);
    double vrati_ukupni_size(string);
    vector<Book*> pronadi(string);

    void print_biblioteku()
    {
        for(unsigned i = 0 ; i < biblioteka.size() ; i++)
        {
            cout<<biblioteka[i]->vrati_autora()<<"\n";
            cout<<biblioteka[i]->vrati_naslov()<<"\n";
            cout<<biblioteka[i]->vrati_velicinu()<<"\n";
            cout<<"\n\n";
        }
    }
};



#endif // BOOK-TEST
