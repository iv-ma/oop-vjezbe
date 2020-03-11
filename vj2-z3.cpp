#include <iostream>

using namespace std;

int* fniz(int n)
{


    int i=2;
    int* arr=new int[n];
    arr[0]=1;

    if(n < 2)
        return arr;

    arr[1]=1;

    while (i<n)
    {
        arr[i]=arr[i-1]+arr[i-2];
        i++;
    }
    return arr;
}
int main()
{

    int broj;
    cin>>broj;
    int* arr=fniz(broj);
    for (int i=0;i<broj;i++)
    {
        cout<<arr[i]<<endl;
    }
    delete arr;
    return 0;
}
