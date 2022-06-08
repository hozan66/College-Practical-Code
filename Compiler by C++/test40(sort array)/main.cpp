#include <iostream>

using namespace std;

int main()
{
    const int siz=5;
    int i,j;
    string arr[siz],temp;

    cout<<"Enter "<<siz<<" words\n";
    for(i=0;i<siz;i++)
        cin>>arr[i];
    cout<<endl;

    for(i=0;i<siz-1;i++)
    {
        for(j=i+1;j<siz;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
        }
    }

    cout<<"Array of words after sorting\n";
    for(i=0;i<siz;i++)
        cout<<arr[i]<<endl;
    return 0;
}
/*Q) sorting the array
Enter 5 words
aa
c
a
ac
ab

Array of words after sorting
a
aa
ab
ac
c

*/
