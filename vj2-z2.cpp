#include <iostream>

using namespace std;


int& vrati(int niz[],int poz)
{
    return niz[poz];
}

int main()
{
    int niz[]={1,1,2,3,4,5,6,7,8,9};
    vrati(niz,2)+=1;
    cout<<niz[2]<<endl;
    return 0;
}
