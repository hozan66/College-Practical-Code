#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Enter 5 numbers randomly:"<<endl;
    for(int i=0;i<5;i++)
        cin>>a[i];
    cout<<endl;

    cout<<"input array is:"<<endl;
        for(int j=0;j<5;j++)
            cout<<"\tNumber at"<<j<<"index:"<<a[j]<<endl;
        cout<<endl;

        int temp;
        for(int i=0;i<=4;i++)
        {
             for(int j=0;j<4;j++)
                if(a[j]>a[j+1])
             {
                 temp=a[j];
                 a[j]=a[j+1];
                 a[j+1]=temp;
             }
        }
        cout<<" After:"<<endl;
        for(int i=0;i<5;i++)
            cout<<"\tNumber at"<<i<<"index:"<<a[i]<<endl;
    return 0;
}/*output is
Enter 5 numbers randomly:
12 21 13 14 25

input array is:
        Number at0index:12
        Number at1index:21
        Number at2index:13
        Number at3index:14
        Number at4index:25

 After:
        Number at0index:12
        Number at1index:13
        Number at2index:14
        Number at3index:21
        Number at4index:25

*/
