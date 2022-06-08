#include <iostream>
using namespace std;

int main()
{
    int arr[5]={10,50,40,77,33};
    int *p;
    p=arr;                      //p=&arr[0];     address of the first element
    cout<<"p="<<p<<endl;
    cout<<"arr="<<arr<<endl;

     cout<<"p+1="<<p+1<<endl;                  //address of the second element
    cout<<"arr+1="<<arr+1<<endl;

    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
    for(int i=0;i<5;i++)
        cout<<*(p+i)<<" ";

         cout<<endl;
    for(int i=0;i<5;i++)
        cout<<*(p++)<<" ";  // here p it will be changed
    return 0;
}
/*
p=0x6dfecc
arr=0x6dfecc
p+1=0x6dfed0
arr+1=0x6dfed0

10 50 40 77 33
10 50 40 77 33
10 50 40 77 33
*/
