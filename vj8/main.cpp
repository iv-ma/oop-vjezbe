#include <iostream>
#include "money.h"

using namespace std;

int main()
{
    Money juha(11, 30), becki(15, 50), salata(10, 0), pivo(15, 0), babic(16, 40);

    Money racun;
    racun = juha + becki + salata + pivo;
    cout<<racun.racun()<<"\n\n";

    racun -= pivo;
    cout<<racun.racun()<<"\n\n";
    racun += babic;
    cout<<racun.racun();
}
