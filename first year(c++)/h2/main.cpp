#include <iostream>
 using namespace std;
int main()
{
int const n=2;
int const m=4;
int i,j,x[n],y[m];
for(i=0;i<n;i++)
    cin>>x[i];
     for(j=0;j<m;j++)
cin>>y[j];
cout<<endl;

 for(i=0;i<n;i++)
     for(j=0;j<m;j++)
         if(x[i]==y[j])
            cout<<i<<" "<<j<<endl;




    return 0;
}
/*find the index
x     y
3     2
6     3
      4
      6

3
6
2
3
4
6

0 1
1 3
*/
