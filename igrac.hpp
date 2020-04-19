#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

#ifndef IGRAC_HPP
#define IGRAC_HPP

class igrac
{
private:
    string ime_igraca;
    int broj_bodova;
    vector<vector<int>> ruka;

public:
    igrac(string);                //kreira igraca i postavlja ime
    ~igrac(){ime_igraca.clear(); ruka.clear() ;cout<<"igrac i ruka obrisani";}                    //brise ime igraca i ruku

    //void postavi_ime(string);          //postavlja ime igraca

    void get_ruka(vector<vector <int> >);        //postavlja ruku igraca,zbroji bodove

    int get_bodove();    //vraca bodove igraca
};



#endif // IGRAC_HPPP

