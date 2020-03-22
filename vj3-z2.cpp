#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdio.h>

using namespace std;
vector<string> zaokreni(char arr[])
{
    string temp;
    vector<string> niz;
    int i = 0;
    while(arr[i] != '.')
    {
        if(arr[i]==' ')
        {
           niz.push_back(temp);
           temp.clear();
        }
        temp.push_back(arr[i]);
        i++;
    }
    reverse(niz.begin(),(niz.end()));
    niz.push_back(".");
    niz[0][1]=toupper(niz[0][1]);
    return niz;
}


int main()
{
    char arr[] = "Ovo je primjer jedne recenice .";

    vector<string> recenica = zaokreni(arr);
    for (unsigned int i = 0; i < recenica.size(); i++)
        {
        for (unsigned int j = 0; j < recenica[i].size(); j++)
            {
            cout << recenica[i][j];
            }
        }
    return 0;
}
