#include <iostream>
#include "treset.h"
#include <stdlib.h>
#include <time.h>


using namespace std;





int main()
{

    srand (time(NULL));

    int broj_igraca;

    deck spil;
    spil.izmjesaj();

    vector <string> igraci;

    cout<<"Dobro dosli na partiju treseta, koliko igraca sudjeluje? (2 ili 4) \n\n"<<endl;

    cin>>broj_igraca;

    cout<<"Unesite ime igraca"<<endl;

    for (int i = 0 ; i < broj_igraca ; i++)
    {
        string ime_covika;
        cin>>ime_covika;

        igraci.push_back(ime_covika);
    }

    igrac prvi_igrac;
    prvi_igrac.postavi_ime(igraci[0]);
    prvi_igrac.get_ruka(spil.podijeli());
    cout<<"Prvi igrac ima "<<prvi_igrac.get_bodove()<<" bodova\n\n";

    igrac drugi_igrac;
    drugi_igrac.postavi_ime(igraci[1]);
    drugi_igrac.get_ruka(spil.podijeli());
    cout<<"Drugi igrac ima "<<drugi_igrac.get_bodove()<<" bodova\n\n";


    if(broj_igraca>2)
    {
        igrac treci_igrac;
        treci_igrac.postavi_ime(igraci[2]);
        treci_igrac.get_ruka(spil.podijeli());
        cout<<"Treci igrac ima "<<treci_igrac.get_bodove()<<" bodova\n\n";

        igrac cetvrti_igrac;
        cetvrti_igrac.postavi_ime(igraci[3]);
        cetvrti_igrac.get_ruka(spil.podijeli());
        cout<<"Cetvrti igrac ima "<<cetvrti_igrac.get_bodove()<<" bodova\n\n";
    }



    return 0;
}
