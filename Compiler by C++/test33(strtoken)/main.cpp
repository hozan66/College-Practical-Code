#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[]="Hello,World,I'm,Token,text";
    char* token=strtok(str,",");  //parameter must be array of characters
    int counter=0;
    cout<<*token<<endl;
    cout<<token<<endl<<endl;

    while(token != NULL){
        cout<<token<<endl;
        token=strtok(NULL,",");
        counter++;
    }
    cout<<"\nNumber of token="<<counter<<endl;
    return 0;
}
/*
H
Hello

Hello
World
I'm
Token
text

Number of token=5

*/
