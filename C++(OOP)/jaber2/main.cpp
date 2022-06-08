/*
Q) Write a program to find middle number (mid point number),
 select Min number and show the length of number.
 For example:
 Your number is: 12345
 1- Find middle number=3
 2- min=1
 3- length your number=5
 Note:
 1- length of number must be odd(123,12345,...)
 2- input any number that you want.
*/
#include <iostream>
using namespace std;

int main()
{
    int n,remainder,mid;

    cout<<"Your Number: ";
    cin>>n;
    int n2=n;

    int mn=n%10;
    int Length=0;
    while(n!=0)
    {
        remainder=n%10;

        if(remainder<mn)
            mn=remainder;

           n/=10;
        Length++;
    }

    for(int i=1;i<=(Length/2+1);i++)
    {
        mid=n2%10;
        n2/=10;
    }

    cout<<"Mid Number="<<mid<<endl;
    cout<<"Min="<<mn<<endl;
    cout<<"length="<<Length<<endl;

    return 0;
}
/*
Output:
Your Number: 12345
Mid Number=3
Min=1
length=5

*/
