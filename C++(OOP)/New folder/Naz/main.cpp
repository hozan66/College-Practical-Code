/*
1. Write a C++ program, using Switch Statement, that reads two integer numbers and one
character. The characters entered should include any of *, /, + and -. When the user enters *,
the program should multiply the two integers and print the result. When you enter /, the
program should divide first number by the 2nd number and print the result … etc. Otherwise the
program should print "Error! The operator is not correct.".
*/
#include <iostream>
using namespace std;
int main( )
{
    int x,y;
    float z;
    char n;

    cout<<"enter two integer numbers: ";
    cin>>x>>y;
    cout<<"enter one of this operator (*,/,+,-): ";
    cin>>n;
    cout<<endl;

    switch(n)
        {
            case '+': z=x+y;
             cout<<"sum="<<z<<endl;
             break;
            case '*': z=x*y;
             cout<<"mul="<<z<<endl;
             break;
             case '/':
             if(y==0)
             {
                cout<<"error! Cannot divide by zero"<<endl;
                break;
             }
             z=float(x)/y;
             cout<<"div="<<z<<endl;
             break;
             case '-': z=x-y;
             cout<<"sub="<<z<<endl;
             break;
             default:cout<<"error! the operator is not correct"<<endl;
        }
  return 0;
}
