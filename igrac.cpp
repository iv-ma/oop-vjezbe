#include "igrac.hpp"


igrac::igrac(string ime)
{
    ime_igraca = ime;
    cout<<"Ime igraca postavljeno na"<<ime_igraca;
}


void igrac::get_ruka(vector<vector <int>> dodijela)
{
    ruka = dodijela;

}


int igrac::get_bodove()
{
    broj_bodova = 0;
    int napolitana1 = 0;
    int napolitana2 = 0;
    int napolitana3 = 0;
    int napolitana4 = 0;
    int asi = 0;
    int duje = 0;
    int trice = 0;



    for (unsigned int i = 0 ; i < 10 ; i++)
    {
        if (ruka[i][1] == 1)
            asi++;

        if (ruka[i][1] == 2)
            duje++;

        if (ruka[i][1] == 3)
            trice++;

        if (ruka[i][1] < 4 && ruka[i][0] == 0)
            napolitana1++;

        if (ruka[i][1] < 4 && ruka[i][0] == 1)
            napolitana2++;

        if (ruka[i][1] < 4 && ruka[i][0] == 2)
            napolitana3++;

        if (ruka[i][1] < 4 && ruka[i][0] == 3)
            napolitana4++;



    }
    if (napolitana1 > 2)
        broj_bodova += napolitana1;

    if (napolitana2 > 2)
        broj_bodova += napolitana2;

    if (napolitana3 > 2)
        broj_bodova += napolitana3;

    if (napolitana4 > 2)
        broj_bodova += napolitana4;

    if (asi > 2)
        broj_bodova += asi;

    if (duje > 2)
        broj_bodova += duje;

    if (trice > 2)
        broj_bodova += trice;


    return broj_bodova;
}

