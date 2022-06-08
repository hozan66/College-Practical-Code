#include <iostream>
using namespace std;
char ch1,ch2;
   int cou=10;
int main()
{
   do
    {
        cout<<"enter\tfirst character"<<endl;
   cin>>ch1;
   cout<<"enter\tsecond character:";
   cin>>ch2;
   cou--;
   if(ch1!=ch1)
   {
       cout<<"continues";
       cou++;
   }
   else
    cou--;
   cout<<"count:"<<cou<<endl;
    }while(cou>0);
    return 0;
}/*the output is
enter   first character
a
enter   second character:b
count:8
enter   first character
c
enter   second character:d
count:6
enter   first character
e
enter   second character:f
count:4
enter   first character
g
enter   second character:h
count:2
enter   first character
i
enter   second character:j
count:0
*/
