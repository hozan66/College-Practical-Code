#include <iostream>
using namespace std;

int main()
{
    int const siz=10;
    int i=0,top=-1;
    char sk[siz];
    string st;
    cout<<"enter your string\n";
    cin>>st;
      cout<<endl;
    while(st[i]!='\0')
    {
        top++;
        sk[top]=st[i];
        i++;
    }

    while(top!=-1)
    {
        cout<<sk[top]<<"\t";
        top--;
    }
    return 0;
}
/*code of printing string in reverse order
enter your string
computer

r       e       t       u       p       m       o       c
*/
