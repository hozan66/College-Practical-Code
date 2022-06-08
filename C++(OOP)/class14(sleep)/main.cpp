#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
cout<<"End Of Level\n\n";
cout<<"H";Sleep(500);   // 500 millisecond
cout<<"a";Sleep(500);
cout<<"m";Sleep(500);
cout<<"d";Sleep(500);
cout<<"i";Sleep(500);
cout<<"n";Sleep(500);
cout<<endl;
Sleep(2000);

cout<<"loading";
for(int i=0;i<5;i++)
{
  Sleep(500);
cout<<".";
}
//system("pause");   stop the program
Sleep(500);
cout<<"\nNext Level\n\n";
Sleep(500);

system("cls");
cout<<"loading";
for(int i=0;i<5;i++)
{
  Sleep(500);
cout<<".";
}
cout<<endl;

for(int i=0;i<9;i++)
{
        for(int j=0;j<=i;j++)
            {
                Sleep(200);
                cout<<"*";
            }
            cout<<endl;
}


cout<<"Hello World..................!\n\n";
Sleep(2000);
for(int i=0;i<100;i++)
{
    cout<<"\nLoading......";
    cout<<i<<"%";
  Sleep(200);
     system("cls");
}
cout<<"Level Up..............!";
    return 0;
}
