#include <iostream>
#include <iomanip>
using namespace std;
void ave(int t1[],int t2[],int m,float av[]);
int main()
{
int const n=8;
int j,test1[n],test2[n];
float avr[n];
string nam[n];
for(j=0;j<n;j++)
    cin>>nam[j]>>test1[j]>>test2[j];
cout<<endl;

ave(test1,test2,n,avr);
cout<<"name"<<setw(10)<<"test1"<<setw(10)<<"test2"<<setw(10)<<"average"<<endl;
for(j=0; j<n; j++)
    cout<<nam[j]<<setw(10)<<test1[j]<<setw(10)<<test2[j]<<setw(10)<<avr[j]<<endl;
    return 0;
    }
    void ave(int t1[],int t2[],int m,float av[])
{
  int i;
    for(i=0;i<m;i++)
        av[i]=(t1[i]+t2[i])/2.;
}
/*write c++ program to read student name and degree of two month then find average using function.
frege 24 34
tjyj 43 77
rgdf 22 34
hoj 3 10
ghfg 43 8
gfggb 7 9
hrhd 21 12
khj 9 3

name     test1     test2   average
frege        24        34        29
tjyj        43        77        60
rgdf        22        34        28
hoj         3        10       6.5
ghfg        43         8      25.5
gfggb         7         9         8
hrhd        21        12      16.5
khj         9         3         6

*/
