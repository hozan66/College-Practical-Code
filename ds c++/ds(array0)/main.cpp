#include <iostream>
#include <cstring>
using namespace std;
int const z=20;
  int n,i,a[z],k;
void addelement();
void delelement();
int main()
{

  cout<<"Enter number of element\n";
  cin>>n;
  cout<<endl;
  cout<<"Enter the elements\n";
  for(i=0;i<n;i++)
    cin>>a[i];
    cout<<endl;
  addelement();
  delelement();
    return 0;
}
void addelement()
{
int k,i;
    cout<<"Enter new element\n";
    cin>>k;
cout<<endl;
   for(i=n;i>0;i--)
    a[i]=a[i-1];

   a[0]=k;
   n++;
   for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}
void delelement()
{
    int i,pos;
     cout<<"Enter an element to delete in any position\n";
     cin>>pos;
     for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];

      n--;
   for(i=0;i<n;i++)
    cout<<a[i]<<endl;

}
