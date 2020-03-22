#include <iostream>
#include <vector>
#include <string>
#include <string.h>


using namespace std;

string najdulji(char prvi[], char drugi[])
{
    vector<string> novi;
    string temp;
    int i = 0, j = 0,k = 0;
    for (i ; i < strlen(prvi) ; i++)
    {
        for(j = 0 ; j < strlen(drugi) ; j++)
        {
            if(prvi[i+j] == drugi[j])
            {
                temp.push_back(drugi[j]);
            }
            else
            {
                //cout << temp;
                novi.push_back(temp);
                //cout << novi[k++];
                temp.clear();
            }
        }
    }
    for (i = 0 ; i < novi.size() ; i++)
    {
        if(novi[i].size() > novi[k].size())
            k = i;
    }
    return novi[k];
}


int main()
{
    char prvi[] = "Ovo je primjer stringa u kojem treba nac najdulji podstring";
    char drugi[] = "primjer gdje treba nac najdulji podstring";
    string novi = najdulji(prvi,drugi);
    cout << novi;
    return 0;
}
