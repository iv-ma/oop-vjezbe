#include <iostream>
#include <string>
#include <vector>

#ifndef MONEY.H
#define MONEY.H


using namespace std;

class Money
{
private:
    int kune, lipe;

public:
    Money(){kune = 0 ; lipe = 0;};
    Money(int ovosukune, int ovosulipe){kune = ovosukune ; lipe = ovosulipe;};
    friend Money operator +(const Money& prvi, const  Money& drugi){return Money(prvi.kune + drugi.kune , prvi.lipe + drugi.lipe);};
    friend Money operator -(const Money& prvi, const Money& drugi){return Money(prvi.kune - drugi.kune , prvi.lipe - drugi.lipe);};
    friend Money operator +=(Money& prvi, const Money& drugi){prvi.kune += drugi.kune ; prvi.lipe += drugi.lipe;};
    friend Money operator -=(Money& prvi, const Money& drugi){prvi.kune -= drugi.kune ; prvi.lipe -= drugi.lipe;};
    double racun();

};


#endif //MONEY

