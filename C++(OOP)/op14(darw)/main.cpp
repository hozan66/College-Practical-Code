#include <iostream>
using namespace std;
void draw(int n,char ch)
{
    for(int i=1;i<=n;i++)
    {
           for(int j=1;j<=n;j++)
           if((i==1||i==n)||(j==1||j==n))
           cout<<ch;
           else
            cout<<" ";
                cout<<endl;
    }
}
int main()
{
    int n;
    char ch;
    cout<<"Input the n & character for drawing\n";
    cin>>n>>ch;
    draw(n,ch);
    return 0;
}
/*
Input the n & character for drawing
8
$
$$$$$$$$
$      $
$      $
$      $
$      $
$      $
$      $
$$$$$$$$

*/
