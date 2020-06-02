#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int veci_od_petstoja = 0;
    int minimalni, maksimalni;
    vector<int> v;
    ifstream f("numbers.txt");
    istream_iterator<int> is(f), eos;
    copy(is, eos, back_inserter(v));

    try
    {
        if (v.empty())
        {
            string msg = "Vector is empty";
            throw msg;
        }
    }
    catch (string msg)
    {
        cout << msg;
        return 0;
    }

    maksimalni = v[0];
    minimalni = v[0];

    for (unsigned i = 0 ; i < v.size() ; i++)
    {
        if (v[i] > 500)
            veci_od_petstoja++;

        if (v[i] < minimalni)
            minimalni = v[i];

        if (v[i] > maksimalni)
            maksimalni = v[i];

        if (v[i] < 300)
        {
            v.erase(v.begin()+i);
            i--;
        }

    }

     sort(v.begin(), v.end(), greater<int>());

    ostream_iterator<int> os(cout, ",");
    copy(v.begin(), v.end(), os);

}
