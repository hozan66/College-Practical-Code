#include <iostream>
using namespace std;

int main()
{
    int num,x=0;
    int a[10];
    cout<<"Enter your number: ";
    cin>>num;
    for(int i=0;num!=0;i++)
    {
        a[x]=num%10;
        x++;
        num/=10;
    }

    int mx=a[0];
    cout<<"Reverse of Number=";
    for(int i=0;i<x;i++)
        {
            if(a[i]>mx)
                mx=a[i];

                cout<<a[i];
        }
     cout<<endl;
     cout<<"Length="<<x<<endl;
     cout<<"Max="<<mx<<endl;
    return 0;
}

/*
Enter your number: 123456789
Reverse of Number=987654321
Length=9
Max=9

*/
