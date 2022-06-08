#include <iostream>
using namespace std;
int main()
{
    int const n=6;
    int i,x=0;
    string na[n],fix;
    for(i=0;i<n;i++)
        cin>>na[i];
    cout<<endl;

    cout<<"vecror A"<<endl;
      for(i=0;i<n;i++)
        cout<<na[i]<<endl;

      cout<<"input a name to delete"<<endl;
      cin>>fix;
      cout<<endl;
      for(i=0;i<n;i++)
        if(na[i]!=fix){
        na[x]=na[i];
      x++;}

      cout<<"vecror B"<<endl;
      for(i=0;i<x;i++)
        cout<<na[i]<<endl;
    return 0;
}
/*write c++ program to read and print out a list of n student's name, then delete a Fix from the list
hoz
hop
kou
ahm
hoz
loo

vecror A
hoz
hop
kou
ahm
hoz
loo
input a name to delete
hoz

vecror B
hop
kou
ahm
loo

*/
