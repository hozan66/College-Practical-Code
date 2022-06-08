#include <iostream>
using namespace std;
int fact(int n);

int main()
{int N;cin>>N;
int sum=0;
    for(int a=1;a<=N;a++)
    {
        if(a%2!=0)
            sum+=fact(a);
        else
            sum +=a/2;
    }
cout<<"sum="<<sum;
    return 0;
}
int fact(int n)
{
    int f=1;
    for(int a=1;a<=n;a++)
        f *=a;
    return f;
}
/*
1!+2/2+3!+4/2+5!
5
sum=130
*/
