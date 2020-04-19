#include "treset.h"

vector<vector<int>> deck::podijeli()
{
    int index;
    vector <vector <int>> ruka;

    for (int i = 0 ; i < 10 ; i++)
    {
        index = rand() % mac.size();

        while (index < 0)
        {
            index = rand() % mac.size() ;

        }
        ruka.push_back(mac[index]);
        
        mac.erase(mac.begin()+index);
    }
    return ruka;
}

void deck::izmjesaj()
{
    int k = 0;
    for (int i = 0 ; i < 4 ; i++)
    {
        for (int j = 0 ; j < (sizeof(zog)/4) ; j++)
        {
            vector <int> temp;
            temp.push_back(i);
            temp.push_back(zog[j]);
            mac.push_back(temp);
        }
    }
}

void igrac::postavi_ime(string ime)
{
    ime_igraca;
    
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

