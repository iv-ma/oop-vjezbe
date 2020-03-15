#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct vektor
{
    int init = 8;
    int fizicka = init, logicka=0;
    int *arr;
}vektor;

vektor vektor_new(vektor v)
{
    v.arr = (int *)malloc(4 * v.init);
    return v;
}

void vektor_delete(vektor v)
{
    free(v.arr);
}

void vektor_pushback(vektor v,int b)
{
    if (v.logicka == v.fizicka)
    {
        v.init = v.init * 2;
        v.arr=(int *)realloc(v.arr,4 * v.init);
    }
    v.arr[v.logicka] = b;
    v.logicka++;
}

void vector_pop_back(vektor v)
{
    v.logicka--;
}

int *vektor_front(vektor v)
{
    return &v.arr[0];
}

int *vektor_back(vektor v)
{
    return &v.arr[v.logicka];
}

int vector_size(vektor v)
{
    return v.logicka;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
