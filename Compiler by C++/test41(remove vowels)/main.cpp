#include <iostream>
using namespace std;
//Q) Remove vowels letters (a,e,i,o,u) from array of words
int main()
{
    const int siz=7;
    int i,j,x=0;
    string arr[siz],newarr[siz],temp;

    cout<<"Enter "<<siz<<" words\n";
    for(i=0;i<siz;i++)
        cin>>arr[i];
    cout<<endl;

    for(i=0;i<siz;i++)
    {
        temp="";
        for(j=0;j<arr[i].length();j++)
        {
            if(arr[i][j]!='a' && arr[i][j]!='e' && arr[i][j]!='i' && arr[i][j]!='o' && arr[i][j]!='u')
            {
                temp+=arr[i][j];
            }
        }
        if(temp.empty()==false)
        {
           newarr[x]=temp;
            x++;
        }
    }

    cout<<"Array of words after Removing vowels letters (a,e,i,o,u)\n";
    for(i=0;i<x;i++)
        cout<<newarr[i]<<endl;
    return 0;
}
/*
Enter 7 words
hozan
osama
aland
ooaiiiiiieee
uuuuuuuuuuuuuuuuhuuuuuuu
aaeeiioouu
compiler

Array of words after Removing vowels letters (a,e,i,o,u)
hzn
sm
lnd
h
cmplr

*/
