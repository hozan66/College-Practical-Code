#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[7]={5,6,7,0,1,5,8};
    sort(arr,arr+7);
    for(int i=0;i<7;i++)
        cout<<arr[i]<<" ";
        cout<<endl;

        int a=10,b=20;
    cout<<"max="<<max(a,b)<<endl;
    cout<<"min="<<min(a,b)<<endl;
    cout<<endl;

    swap(a,b);  //it's void type
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}
/*
0 1 5 5 6 7 8
max=20
min=10

a=20
b=10

*/
