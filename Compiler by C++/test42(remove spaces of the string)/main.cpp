#include <iostream>
using namespace std;
//Q) Remove spaces from input long string
int main()
{
    string str,stringConcat="";

    cout<<"Enter long string with spaces:\n";
    getline(cin,str);
    cout<<endl;

    for(int i=0;i<str.length();i++)
        if(str[i]!=' ')
        stringConcat+=str[i];

    cout<<"After Removing spaces: "<<stringConcat<<endl;

    return 0;
}
/*
Enter long string with spaces:
My Name Is Hozan

After Removing spaces: MyNameIsHozan

*/
