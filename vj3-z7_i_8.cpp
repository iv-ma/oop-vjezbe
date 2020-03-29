#include <iostream>
#include <vector>

using namespace std;


vector<int> stuffing_bit(vector<int>& cont)
{
    int seq[8] = {0,1,1,1,1,1,1,0}, brojac = 0;
    vector<int> sbl;
    sbl.insert(sbl.begin(),seq,seq+8);
    for (unsigned int i = 0; i < cont.size() ; i++)
    {
        if (cont[i] == 1)
            brojac++;
        if(cont[i] == 0)
            brojac = 0;
        if (brojac == 5)
        {
            sbl.push_back(0);
            brojac = 0;
        }
        sbl.push_back(cont[i]);
    }
    sbl.insert(sbl.end(),seq,seq+8);
    return sbl;
}


void destuffing_bit(vector<int>& cont)
{
    unsigned int brojac = 0;

    for (unsigned int i = 0 ; i < cont.size(); i++)
    {
        if (cont[i] == 1)
            brojac++;
         if (brojac == 4 && cont[i+1] == 1)
        {
            brojac = 0;
            cont.erase(cont.begin()+i);
        }
        if(cont[i] == 0)
            brojac = 0;

    }
}


int main()
{
    vector <int> kontenjer,novi_k;
    int unos;

    cout<<"Unesite binaran broj"<<endl;
    while(1)
    {
        cin>>unos;
        if(unos != 0 && unos != 1)
            break;
        kontenjer.push_back(unos);
    }

    novi_k = stuffing_bit(kontenjer);

    for (unsigned int i = 0 ; i < novi_k.size() ; i++)
        cout<<novi_k[i]<<endl;

    destuffing_bit(novi_k);
    cout<<"\n\n\n";

     for (unsigned int i = 0 ; i < novi_k.size() ; i++)
        cout<<novi_k[i]<<endl;
    return 0;
}
