/*
2. Write a C++ program, that reads an integer number n. Then find the factorial of n (n!), and print
it.
*/
#include <iostream>
using namespace std;
int main()
{
 int f=1;
 int n;
 cout<<"Enter an integer number: ";
 cin>>n;
 for(int i=1;i<=n;i++)
 f=f*i;
 cout<<"fact="<<f<<endl;
 return 0;
}
