#include <iostream>
using namespace std;
void draw(int n);
int main()
{
     int x;
    cin>>x;
    draw(x);

    return 0;
}
void draw(int n)
{
    int i,j;
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
          cout<<"* ";
    cout<<endl;
   }
}
/*
4
* * * *
* * * *
* * * *
* * * *
*/
