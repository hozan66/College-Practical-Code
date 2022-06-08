#include <iostream>
using namespace std;
#include <cstring>
#include <iomanip>
using namespace std;
int main()
{int const n=3;
int i,t1[n],t2[n];
float mean;
string su[n];
for(i=0;i<n;i++)
    cin>>su[i]>>t1[i]>>t2[i];
cout<<endl<<"subject"<<setw(10)<<"test1"<<setw(10)<<"test2"<<setw(10)<<"mean"<<endl;
 for(i=0;i<n;i++)
 {
      mean=(t1[i]+t2[i])/2.;
      cout<<su[i]<<setw(10)<<t1[i]<<setw(10)<<t2[i]<<setw(10)<<mean<<endl;
 }
    return 0;
}
/*
lo
5
8
bo
10
4
ke
6
6

subject     test1     test2      mean
lo         5         8       6.5
bo        10         4         7
ke         6         6         6
*/
