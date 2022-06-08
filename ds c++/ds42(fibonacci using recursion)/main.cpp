#include <iostream>
using namespace std;

int fib(int n)
{
    if(n==0||n==1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    cout<<fib(n)<<endl;

    // 0 1 2 3 4 5 6  7  8 9.......
    // 0 1 1 2 3 5 8 13 21 34.......
    return 0;
}
/* ??fibonacci using recursion
Enter a Number: 9
34

*/
