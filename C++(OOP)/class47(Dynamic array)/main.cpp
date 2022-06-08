#include <iostream>
using namespace std;

int main()
{
    int i;
    int x;
    cout<<"Enter size of array: ";
    cin>>x;
    int *arr=new int[x]; //new is return address
    for(i=0;i<x;i++)
        cin>>arr[i];
    cout<<endl;

     for(i=0;i<x;i++)
        arr[i]=arr[i]*2;

     for(i=0;i<x;i++)
        cout<<arr[i]<<endl;

        delete[] arr;

    return 0;
}
/*
Enter size of array: 6
1 2 3 4 5 6

2
4
6
8
10
12

*/
