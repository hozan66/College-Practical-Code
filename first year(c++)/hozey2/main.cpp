#include <iostream>
using namespace std;
int main()
{
    int const n=6;
    int i,x=0,m,j,a;
    string na[n],na2[n];
    for(i=0;i<n;i++)
        cin>>na[i];
    cout<<endl;

    cout<<"vecror A"<<endl;
      for(i=0;i<n;i++)
        cout<<na[i]<<endl;

      cout<<"how many names do you want to delete"<<endl;
      cin>>m;
      for(j=0;j<m;j++)
      cin>>na2[j];
      cout<<endl;

      for(i=0;i<n;i++)
     {
         a=0;
        for(j=0;j<m;j++)
        if(na[i]!=na2[j])
        {
            a++;
        }
        if(a==m)
        {
        na[x]=na[i];
        x++;
        }
     }
      cout<<"vecror B"<<endl;
      for(j=0;j<x;j++)
        cout<<na[j]<<endl;
    return 0;
}
/*write c++ program to read and print out a list of n student's name, then delete k name's from the list
hoz
hop
kou
ahm
han
loo

vecror A
hoz
hop
kou
ahm
han
loo
how many names do you want to delete
2
hoz
kou

vecror B
hop
ahm
han
loo

*/
