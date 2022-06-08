#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array\n";
    cin>>n;
    int i,d=0;
    float a[n],y=0,avr;
    for(i=0;i<n;i++)
        cin>>a[i];
        cout<<endl;

            for(i=0;i<n;i++)
            {
                 if(a[i]!= int (a[i]) )
                 {
                y+=a[i];
                d++;
                 }
            }

                avr=y/d;
                cout<<"y="<<y<<endl;
            cout<<"avr="<<avr<<endl;

    return 0;
}
/*find the average of float numbers?
enter size of array
6
2 1.2 3 6 2.4 6.6

y=10.2
avr=3.4

*/
