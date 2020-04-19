
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;

#ifndef DECK_HPP
#define DECK_HPP

class deck
{
private:
    int zog[10] = {1,2,3,4,5,6,7,11,12,13};
    vector<vector<int> > mac;

public:
    deck();          //mijesa deck
     ~deck(){cout<<"deck se brise"; mac.clear();}; //brise deck

    vector<vector<int> > podijeli();   //uzme random 10 karata, dodijeli igracu i izbrise ih iz decka,vraca vector<vektora <int>> gdje index 0 oznaca zog a 1 jacinu karte
};



#endif // DECK_HPP
