#include "money.h"


double Money::racun()
{
    double vrijednost = 0;
    vrijednost += lipe ;
    vrijednost = vrijednost / 100;
    vrijednost += kune;
    return vrijednost;
}
