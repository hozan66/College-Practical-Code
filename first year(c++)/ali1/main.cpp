#include <iostream>
using namespace std;
int main()
{
    int arr[3][3]={
    {
        1,2,3
    },
    {
        4,5,6
    },
    {
        7,8,9
    }

    };

    for(int a=0;a<3;a++)
        for(int b=0;b<3;b++)
    if((a+b)==(2))
        {
        int temp=arr[a][b];
        arr[a][b]=arr[a][a];
        arr[a][a]=temp;


    }
    for(int a=0;a<3;a++)
    {


        for(int b=0;b<3;b++)
        cout<<arr[a][b]<<" ";
        cout<<endl;
    }



    return 0;
}

/*
3 2 1
4 5 6
9 8 7
*/
