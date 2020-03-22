#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

string izbaci(string str)
{
    int i = 2;
    char arr[] = "nekako";
    while (i != 0)
        {
            str.erase(str.find(arr),sizeof(arr));
            i--;
        }
    return str;
}

int main()
{
    string str = "Primjer recenice u kojoj nekako treba izbaciti nekako rijeci ";
    string novi = izbaci(str);
    cout<<novi<<endl;
    return 0;
}
