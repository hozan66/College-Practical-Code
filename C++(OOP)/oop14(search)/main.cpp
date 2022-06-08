#include <iostream>
using namespace std;
void Search(int arr[],int siz,int k)
{
    bool g=false;
    for(int i=0;i<siz;i++)
    {
        if(arr[i]==k)
            g=true;
    }
    if(g)  //means if (true)
        cout<<"Found\n";
    else
        cout<<"Not Found\n";
}
int main()
{
    int arr[]={22,55,88,99,1,0,77}; //according to these elements size of array is 7
    Search(arr,7,88);  //Found
    return 0;
}
