#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

#ifndef TRESET_H
#define TRESET_H

class deck
{
private:
    int zog[10] = {1,2,3,4,5,6,7,11,12,13};
    vector<vector<int> > mac;

public:
    vector<vector<int> > podijeli();   //uzme random 10 karata, dodijeli igracu i izbrise ih iz decka,vraca vector<vektora <int>> gdje index 0 oznaca zog a 1 jacinu karte

    void izmjesaj();          //mijesa deck
};

class igrac
{
private:
    string ime_igraca;
    int broj_bodova;
    vector<vector<int>> ruka;

public:
    //igrac();                //

    void postavi_ime(string);          //postavlja ime igraca

    void get_ruka(vector<vector <int> >);        //postavlja ruku igraca,zbroji bodove

    int get_bodove();    //vraca bodove igraca
};


#endif // TRESET_H
