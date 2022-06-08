#include <iostream>
using namespace std;
void f(int n)
{
    if(n==0)
        return; //stop
    else
    {
        cout<<n<<"\t";
        f(n-1);
        cout<<n<<"\t";
    }
}
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    f(n);
    return 0;
}
/*
Enter a Number: 5
5       4       3       2       1       1       2       3       4       5
*/
