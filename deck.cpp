#include "deck.hpp"


vector<vector<int>> deck::podijeli()
{
    int index;
    vector <vector <int>> ruka;

    for (int i = 0 ; i < 10 ; i++)
    {
        index = rand() % mac.size();

        while (index < 0)
        {
            index = rand() % mac.size() ;

        }
        ruka.push_back(mac[index]);
        mac.erase(mac.begin()+index);
    }
    return ruka;
}

deck::deck()
{
    cout<<"Deck se stvara\n";
    int k = 0;
    for (int i = 0 ; i < 4 ; i++)
    {
        for (int j = 0 ; j < (sizeof(zog)/4) ; j++)
        {
            vector <int> temp;
            temp.push_back(i);
            temp.push_back(zog[j]);
            mac.push_back(temp);
        }
    }
}
