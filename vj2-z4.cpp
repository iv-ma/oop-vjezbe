#include <iostream>

using namespace std;

typedef struct kruznica
{
    int polumjer,x,y;

}kruznica;

int broj(const kruznica (&niz)[2])
{
    int broj = 0;
    int xkoord = niz[0].x - niz[1].x;
    int ykoord = niz[0].y - niz[1].y;
    int pol = niz[0].polumjer + niz[1].polumjer;
    if (xkoord<0)
        xkoord*=-1;
    if (ykoord<0)
        ykoord*=-1;
    if (xkoord-pol <= 0 && ykoord-pol <=0 )
        return 1;
    return 0;
}

int main()
{
    kruznica niz[2];
    niz[0].polumjer = 5;
    niz[0].x = 5;
    niz[0].y = 5;
    niz[1].polumjer = 100;
    niz[1].x = 10;
    niz[1].y = 12;
    int vel= sizeof(niz)/sizeof(kruznica);

    int n = broj(niz);
    cout<<n<<endl;
    return 0;
}
