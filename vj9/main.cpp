#include <iostream>
#include <string>
#include <vector>
#include "vj9.h"


using namespace std;


int main()
{
    int arr1[]={55,4,6,2,7,4,7,5,14,1};

    char arr2[] = "Hello wWorld";

    sortiraj(arr1,sizeof(arr1)/4);
    sortiraj(arr2,sizeof(arr2));


    for(int i = 0 ; i < sizeof(arr2) ; i++)
        cout<<arr2[i];
    cout<<"\n\n";
    for(int i = 0 ; i < sizeof(arr1)/4 ; i++)
        cout<<arr1[i]<<endl;


    Stack<1> novi;
    novi.push(6);
    novi.pop();
    cout<<novi.is_empty();

    return 0;
}
