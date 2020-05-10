#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <time.h>

#ifndef BIMBAMBOM.H
#define BIMBAMBOM.H


using namespace std;



class Player
{
protected:
    string ime;
    int vrijednost;

public:
    void postavi_ime(string covik){ime = covik;};
    string vrati_ime(){return ime;};
    int vrati_vrijednost(){return vrijednost;};
    virtual void postavi_vrijednost()
    {
        int broj;
        vrijednost = broj;
    }
};


class HumanPlayer : public Player
{
public:
    virtual void postavi_vrijednost()
    {
        int broj;
        cin>>broj;
        vrijednost = broj;
    }
};


class ComputerPlayer : public Player
{
public:
    void postavi_ime()
    {
        string komp = "digitron";
        ime = komp;
    };
    virtual void postavi_vrijednost()
    {
        vrijednost = rand()%10;
    }
};


class Game
{
private:
    HumanPlayer covik;
    ComputerPlayer digitron;

public:

    void postavi_covika(string igrac){covik.postavi_ime(igrac); digitron.postavi_ime();};
    void nova_runda()
    {cout<<"Unesi broj"; covik.postavi_vrijednost() ; digitron.postavi_vrijednost();};

    void provjeri()
    {
        if ((covik.vrati_vrijednost() + digitron.vrati_vrijednost())%2 == 0)
            cout<<"Igrac "<<covik.vrati_ime()<<" pobjedio sa "<<covik.vrati_vrijednost() << " a digitron "<<digitron.vrati_vrijednost();
        else
            cout<<"Igrac "<<digitron.vrati_ime()<<" pobjedio sa "<<digitron.vrati_vrijednost();
    }
};


#endif // BIMBAMBOM

