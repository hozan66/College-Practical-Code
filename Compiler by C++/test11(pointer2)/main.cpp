#include <iostream>
using namespace std;

void Swap0(int x,int y);
void Swap1(int&x,int&y);
void Swap2(int*x,int*y);
int main()
{
    int a=3,b=5;
    cout<<"Call by value\n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
    Swap0(a,b);  //call by value
    cout<<"a="<<a<<"\tb="<<b<<endl;
    cout<<"------------------------------------------\n";

    cout<<"Call by reference\n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
    Swap1(a,b);  //call by reference
    cout<<"a="<<a<<"\tb="<<b<<endl;
    cout<<"------------------------------------------\n";

    cout<<"Call by pointer\n";
    cout<<"a="<<a<<"\tb="<<b<<endl;
    Swap2(&a,&b);  //call by pointer
    cout<<"a="<<a<<"\tb="<<b<<endl;
    cout<<"------------------------------------------\n";
    return 0;
}

void Swap0(int x,int y)
{
   int temp=x;
   x=y;
   y=temp;
}

void Swap1(int&x,int&y)
{
   int temp=x;
   x=y;
   y=temp;
}


void Swap2(int*x,int*y)
{
   int temp=*x;
   *x=*y;
   *y=temp;
}

/*
Call by value
a=3     b=5
a=3     b=5
------------------------------------------
Call by reference
a=3     b=5
a=5     b=3
------------------------------------------
Call by pointer
a=5     b=3
a=3     b=5
------------------------------------------
*/
