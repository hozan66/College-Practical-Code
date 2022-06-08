#include <iostream>
using namespace std;

int fact(int n)
{
    switch(n)
    {
        case 0:
        case 1:return 1;break;
        default:
        return n*fact(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter a number:\n";
    cin>>n;
    cout<<fact(n);
    return 0;
}
/*write a program to find n! using recursion and using switch case??
Enter a number:
5
120
*/
