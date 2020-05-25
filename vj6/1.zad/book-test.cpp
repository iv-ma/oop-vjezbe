#include "book-test.h"



vector<string> Library::vrati_naslove(string autor)
{

    vector<string> temp;

    for(unsigned i = 0 ; i < biblioteka.size() ; i++)
    {
        Book* temp_knjiga = biblioteka[i];
        if (temp_knjiga->vrati_autora() == autor)
            temp.push_back(temp_knjiga->vrati_naslov());
    }

    return temp;
}

double Library::vrati_ukupni_size(string autor)
{
    double temp = 0;

    for(unsigned i = 0 ; i < biblioteka.size() ; i++)
    {
        Book* temp_knjiga = biblioteka[i];
        if (autor == temp_knjiga->vrati_autora())
            {
                temp =temp + temp_knjiga->vrati_velicinu();
            }
    }

    return temp;
}

vector<Book*> Library::pronadi(string podstring)
{
    vector<Book*> temp;

    for(unsigned i = 0 ; i < biblioteka.size() ; i++)
    {
        Book* pokazivac = biblioteka[i];
        string temp_string = pokazivac->vrati_naslov();
        if (temp_string.find(podstring) == podstring.size())
            temp.push_back(biblioteka[i]);
    }

    return temp;
}

