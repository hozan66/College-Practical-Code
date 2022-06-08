/*
Write a program to input string then substring and
check if the substring exist in the string or not??
*/
#include <iostream>
using namespace std;
int main()
{
   string mainStr,subStr;
   cout<<"Enter the main string: ";
   cin>>mainStr;
   cout<<endl;

   cout<<"Enter the sub string: ";
   cin>>subStr;
   cout<<endl;

   int x=mainStr.find(subStr); //return the index of the first character of substring
   cout<<"x="<<x<<endl;

   if(x!=-1)
    cout<<subStr<<" is substring of "<<mainStr<<endl;
   else
    cout<<subStr<<" is not substring of "<<mainStr<<endl;
    return 0;
}
/*
Enter the main string: computer

Enter the sub string: put

x=3
put is substring of computer

*/
