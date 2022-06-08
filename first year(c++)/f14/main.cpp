#include <iostream>
using namespace std;
int numlist[20];
int sum=0;
int main()
{
    cout<<"Enter list of number"<<endl;
    for(int i=0;i<9;i=i+1)
    {
        cin>>numlist[i];
        if(i%2!=0)
            i--;
        else
            i=i+3;
        i++;
        sum=sum+numlist[i];
    }
    cout<<"sum="<<sum<<endl;
    return 0;
}/*output is
Enter list of number
1
2
3
sum=2

*/
