#include <iostream>
using namespace std;
void Sort(int a[],int siz)
{
    int i,j,c;
    for(i=0;i<siz-1;i++)
    {
       for(j=i+1;j<siz;j++)
       {
           if(a[j]<a[i])
           {
               c=a[i];
               a[i]=a[j];
               a[j]=c;
           }
       }
    }
  for(i=0;i<siz;i++)
    cout<<a[i]<<endl;

}
int main()
{
    int arr[7]={5,6,7,0,1,5,8};
    Sort(arr,7);
    return 0;
}
/*
0
1
5
5
6
7
8

*/
