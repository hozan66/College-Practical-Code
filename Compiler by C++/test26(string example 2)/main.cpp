/*
The example below will convert each lowercase character of a string to uppercase
character and vice versa using pointer.
*/
#include<iostream>
#include<cstring>
#include<cctype>  //or  #include<ctype.h>
using namespace std;
int main()
{
    char* name;
     cout<<"Enter your name: ";
       cin.getline(name,20);

    for( int i = 0; i < strlen(name) ; i++)
        { if ( islower( *(name+i) ) )
            //convert to uppercase
            *(name+i) = toupper( *(name+i) );
            else
            //convert to lowercase
            *(name+i) = tolower( *(name+i) );
        }
    //Display the result
    cout << "The conversion is: ";
    cout << name << endl;
}
/*
Enter your name: Hozan Ageed Farho
The conversion is: hOZAN aGEED fARHO

*/
