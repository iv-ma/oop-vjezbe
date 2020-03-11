#include <iostream>

using namespace std;


void nadi(int niz[],int n,int& najmanji,int& najveci)
{
    int i=0;

    while(i<n)
    {
        if(najmanji > niz[i])
        {
            najmanji = niz[i];
        }


        if(najveci<niz[i])
        {
            najveci=niz[i];
        }


        i++;
    }

}


int main()
{
    int broj;
    cin>>broj;
    int* arr=fniz(broj);
    for (int i=0;i<broj;i++)
    {
        cout<<arr[i]<<endl;
    }
    delete arr;
    return 0;
}
