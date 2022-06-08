#include <iostream>
using namespace std;
int main()
{
    int *p;
    float *f;
    int a=7;
    float b=2.5;
    p=&a;
    f=&b;
    cout<<"a="<<a<<"\t"<<"*p="<<*p<<"\t"<<"*p+2="<<*p+2<<endl;
        cout<<"*f+3.7="<<*f+3.7<<endl;
        cout<<"b+*f="<<b+*f<<endl;

    return 0;
}
/*H.W ,what is the output
a=7     *p=7    *p+2=9
*f+3.7=6.2
b+*f=5

*/
