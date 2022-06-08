#include <iostream>
using namespace std;
int ma(int x,int y)
{

        return (x>y)? x:y;

}
int main()
{
    int i,n,a,b;
    cout << "Enter n numbers to find the maximum" << endl;
    cin>>n;
     cin>>a;
    for(i=2;i<=n;i++)
    {
        cin>>b;
       a= ma(a,b);
    }
    cout <<"max="<< a<<endl;
    return 0;
}
/*
Enter n numbers to find the maximum
5
174
78
978
723
456
max=978
*/
