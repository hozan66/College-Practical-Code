#include <iostream>
using namespace std;
int main()
{
    string s2(" Hello World!");
    cout<<s2<<endl<<endl;

    string x="high";
    char y[]="school";
    char z[]={'w','a','s','\0'};
    char *p ="good";
    string s=x+y+' '+z+" very"+" "+p+'!';
    cout<<"s="<<s<<endl;
    cout<<"s="+s+s2<<endl;
    cout<<*p;

    return 0;
}
/*
 Hello World!

s=highschool was very good!
s=highschool was very good! Hello World!
g
*/
