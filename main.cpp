#include <iostream>
#include <time.h>
#include "bimbambom.h"

using namespace std;

int main()
{
    srand (time(NULL));
    cout << "Hello world!" << endl;
/*
    HumanPlayer igrac;
    igrac.postavi_ime("Ante");
    igrac.postavi_vrijednost();
    cout<<igrac.vrati_ime();
    cout<<igrac.vrati_vrijednost()<<"\n\n";

    ComputerPlayer digitron;
    digitron.postavi_vrijednost();
    digitron.postavi_ime();
    cout<<digitron.vrati_ime();
    cout<<digitron.vrati_vrijednost();

*/
    Game bimbam;
    bimbam.postavi_covika("ante");
    bimbam.nova_runda();
    bimbam.provjeri();

    return 0;
}
