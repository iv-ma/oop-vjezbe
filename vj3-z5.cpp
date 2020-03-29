
#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>
#include <stdio.h>

using namespace std;



vector<string> zaokreni(char arr[])
{
    string temp;
    vector<string> niz;
    int i = 0;
    while(arr[i] != '.')
    {
        temp.push_back(tolower(arr[i]));
        if(arr[i+1]==' ')
        {

           niz.push_back(temp);
           temp.clear();
           i++;
           niz.push_back(" ");
        }
        i++;
    }
    niz.push_back(temp);
    temp.clear();
    niz[0][0]=toupper(niz[0][0]);
    return niz;
}

vector<string> pig_translate(vector<string>& niz)
{

    for (unsigned int i = 0; i < niz.size(); i++)
        {
            if(niz[i][0] == 'a' || niz[i][0] == 'e' || niz[i][0] == 'i' || niz[i][0] == 'o' || niz[i][0] == 'u' )
                {
                    niz[i].append("hay");
                }
            else if (niz[i][0] != ' ')
            {
                for (unsigned int j = 0; j < niz[i].size(); j++)
                    {
                        if(tolower(niz[i][j]) == 'a' || tolower(niz[i][j]) == 'e' || tolower(niz[i][j]) == 'i' || tolower(niz[i][j]) == 'o' || tolower(niz[i][j]) == 'u')
                            {
                                niz[i].erase(niz[i].begin(),niz[i].begin()+j);
                                niz[i].append("uy");
                                break;
                            }
                        if(tolower(niz[i][j]) != 'a' || tolower(niz[i][j]) != 'e' || tolower(niz[i][j]) != 'i' || tolower(niz[i][j]) != 'o' || tolower(niz[i][j]) != 'u' );
                            {
                                niz[i].push_back(niz[i][j]);
                            }

                    }
            }
        }
        return niz;
}

int main()
{
    char arr[] = "this is an example of a text.";

    vector<string> recenica = zaokreni(arr);
    recenica = pig_translate(recenica);
    for (unsigned int i = 0; i < recenica.size(); i++)
        {
            for (unsigned int j = 0; j < recenica[i].size(); j++)
                {
                    cout << recenica[i][j];
                }
        }
    return 0;
}
