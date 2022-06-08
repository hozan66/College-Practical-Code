#include <iostream>
using namespace std;
void cal(int a[], int siz, float &avrp, float &avrn)
{
    int sump=0,sumn=0;
    float x=0,y=0;
    for(int i=0;i<siz;i++)
    {
        if(a[i]>=0)
        {
                   sump+=a[i];
                    x++;
        }

        else
        {
            sumn+=a[i];
            y++;
        }


    }
    avrp=sump/x;
    avrn=sumn/y;
}

int main()
{
    int const n=4;
    int a[n];
    float avrp,avrn;
cout<<"size of array is 4\n";
     for(int i=0;i<n;i++)
        cin>>a[i];

        cal(a,n,avrp,avrn);
        cout<<"avrp="<<avrp<<endl;
        cout<<"avrn="<<avrn<<endl;

    return 0;
}
/*find average of positive and negative
size of array is 4
2 8 -9 -6
avrp=5
avrn=-7.5

*/
