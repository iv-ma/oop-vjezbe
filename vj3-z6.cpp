#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;




unsigned int umetni(vector<int> &lista)
{
    vector<int>::iterator it;
    vector<int>::iterator kraj;
    unsigned int j = 0,k = 0;
    for(unsigned int i = 0 ; i < lista.size() ; i+=2)
    {
        if (lista[i]%2 == 0)
            lista.insert(lista.begin()+i, 0);
        else if(lista[i]%2 != 0 && lista[i] != 1)
            lista.insert(lista.begin()+(i+1), 1);
        if(lista[i-1] == 0 && k == 0)
            k = i;
        if(lista[i-1] == 1)
            j = i;
    }
    return (j-k);
}




int main()
{
    srand (time(NULL));
    vector<int> lista ;
    int broj_elem;
    cout<<"Unesite broj elemenata liste"<< endl;
    cin>>broj_elem;
    for (int i = 0 ; i < broj_elem ; i++)
    {
        lista.push_back(rand()%100);
        //cout<<lista[i]<<"\n";
    }
    unsigned int j=umetni(lista);
        for (int i = 0 ; i < lista.size() ; i++)
    {
        cout<<lista[i]<<"\n";
    }
    cout<<j<<"\n";
    return 0;
}
