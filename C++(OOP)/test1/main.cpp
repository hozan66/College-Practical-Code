/*
1- Write a C++ program that uses a while loop to compute and print the sum of a given number of
squares. For example, if 5 is input, then the program will print 55, which equals 1^2 + 2^2 + 3^2 + 4^2
+ 5^2.
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int num,i,sum=0;
    cout<<"Enter a Number: ";
    cin>>num;
    i=1;
    while(i<=num)
    {
        sum=sum+pow(i,2);
        i++;
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}
/*
Enter a Number: 5
sum=55

*/
