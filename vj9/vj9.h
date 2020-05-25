#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

#ifndef VJ9.H
#define VJ9.H


using namespace std;


template <class T>
void sortiraj(T arr[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        for (int j = i ; j < size ; j++)
        {
            if (arr[i] > arr[j])
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


template <>
void sortiraj(char arr[], int size)
{
    for (int i = 0 ; i < size ; i++)
    {
        for (int j = i ; j < size  ; j++)
        {
            int pojnternai = arr[i];
            int pojnternaj = arr[j];

            if (pojnternai<91 && pojnternai >64)
                pojnternai+=32;

            if (pojnternaj<91 && pojnternaj >64)
                pojnternaj+=32;

            if (pojnternai > pojnternaj)
            {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


template<int>
class Stack
{
private:
    int* stog = NULL;
    int velicinastoga = 0;

public:

    void push(int T)
    {
        int* unos = (int*) realloc (stog, 1 * sizeof(int));
        stog = unos;
        stog[velicinastoga] = T;
        velicinastoga++;


    };

    void pop()
    {
        stog[velicinastoga-1] = NULL;
        velicinastoga--;
    }

    string is_empty()
    {

        string prazno = "Stog je prazan";
        string nijeprazno = "Stog nije prazan";

        if (*stog != NULL)
            return nijeprazno;
        else
            return prazno;
    }

};


#endif // VJ9
