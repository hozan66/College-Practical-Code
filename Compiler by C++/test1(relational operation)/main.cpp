//check the relational operation < <= > >= == !=
#include <iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a relational operations: ";
    cin>>str;
    switch(str[0])
    {
        case '=':
            if(str[1]=='=')
                cout<<"equal equal\n";
            else
                cout<<"equal\n";
            break;

        case '<':
            if(str[1]=='>')
                cout<<"not equal\n";
            else if(str[1]=='=')
                cout<<"less than or equal\n";
            else
                cout<<"less than\n";
            break;

        case '>':
            if(str[1]=='=')
                cout<<"greater or equal\n";
            else
                cout<<"greater than\n";
            break;

            default: cout<<"Not Relational Operations\n"; break;
    }
    return 0;
}
/*
Enter a relational operations: <>
not equal

*/
