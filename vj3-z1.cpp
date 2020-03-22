#include <iostream>
#include <vector>>

using namespace std;

vector<int> sumiraj (vector<int> v)
{
    vector<int> novi_v;
    vector <int>::iterator rit = v.end()-1;
    vector<int>::iterator it = v.begin();

    for (unsigned int i = 0 ; i < (v.size()/2) ; i++ )
    {
        novi_v.push_back((*rit)+(*it));
        --rit;
        ++it;
    }

    int najveci = novi_v[0], najmanji = novi_v[0];
    for (unsigned int i = 0 ; i < novi_v.size() ; i++)
    {
        if (novi_v[i] > najveci)
            najveci = novi_v[i];
        if (novi_v[i] < najmanji)
            najmanji = novi_v[i];
    }
    cout<<"Najmanja suma je "<<najmanji<<endl;
    cout<<"Najveca suma je "<<najveci<<endl;
    return novi_v;
}

int main()
{
    vector <int> v , novi_v;
    int arr[] = {1,2,3,4,5,6,7,8,9,2};
    v.assign(arr,arr+10);

    novi_v=sumiraj(v);

    for (unsigned int i = 0 ; i < novi_v.size() ; i++ )
        cout << novi_v[i]<< endl;
    return 0;
}
