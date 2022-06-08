#include <iostream>
using namespace std;
char clist[20];
   int cou=0;
int main()
{
 for(int i=0;i!=8;i=i+1)
    {
        cout<<"ch("<<cou<<"):";
        cin>>clist[i];
        if(cou%2==0)
            i--;
        else
            i=i+3;
        cou++;
        cout<<"counter:"<<cou<<"Next\n";
    }
    cout<<"Final Counter="<<cou<<endl;
    cout<<"List of Char:"<<endl;
    for(int i=0;i<cou;i++)
        cout<<"\n"<<clist[i];
    return 0;
}/*the output is
ch(0):a
counter:1Next
ch(1):b
counter:2Next
ch(2):c
counter:3Next
ch(3):d
counter:4Next
Final Counter=4
List of Char:

b



*/
