#include <iostream>
#include <stdlib.h>

using namespace std;

int ispisi(int **niz)
{
    int broj = 0;
    int trenutni = 10,unos;
    while(1)
    {

        cin>>unos;

        if (unos == 0)
            return broj;

        if (broj == trenutni)
        {
            trenutni = trenutni * 2;
            *niz =(int *)realloc(*niz, sizeof(int)*trenutni);
        }
        (*niz)[broj] = unos;
        broj++;
    }
}

int main()
{
    int *arr = (int*)malloc(sizeof(int)*10);
    int n = ispisi(&arr);
    for (int i = 0;i < n ; i++)
        cout<<arr[i]<<endl;
    free(arr);
    return 0;

}
