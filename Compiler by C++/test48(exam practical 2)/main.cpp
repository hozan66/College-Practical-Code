#include <iostream>

using namespace std;

int main()
{
    string a,h="";
    int i,len;
    cout<<"enter string"<<endl;
    getline(cin,a);
    len=a.length();
    for(i=0;i<len;i++)
    {
        if(a[i]=='a' or a[i]=='e' or a[i]=='i' or a[i]=='o' or a[i]=='u' or a[i]==' ')
            h=h+a[i];
    }
    cout<<h;

    return 0;
}
