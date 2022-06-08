#include <iostream>

using namespace std;

int main()
{
    string a="";
    bool x=a.empty();  //to check if string is empty or not
    cout<<x<<endl;

    string strA = "hello";
   for ( int i = 0; i < strA.length(); i++ )
      cout << strA.data()[i];
   cout<<"\n-------------------------------------------\n"<< endl;

   string st1="HozanHamdin",st2,st3,st4;
   st2=st1.substr();
   cout<<st2<<endl;

   st3=st1.substr(2);
   cout<<st3<<endl;

   st4=st1.substr(5,3);
   cout<<st4<<endl;

   st1.insert(5,"Ran");
   cout<<st1<<endl;

   st1.replace(0,5,"Solen");
   cout<<st1<<endl;
cout<<"\n _____________________________________________________";
   st1.erase(5,3);  //st1.clear() to erase the whole string
   cout<<st1<<endl;
cout<<"----------------------------------\n";

   string s="highShcool";
   if(s.find("coo")!=-1)
    cout<<"found\n";
    else
        cout<<"not found\n";

    cout<<s.rfind("c")<<endl;

     string x2="FROM:ayoussef@gwu.edu";
        int colonPos=x2.find(':'); //4
        string prefix=x2.substr(0,colonPos); //=FROM
        string suffix = x2. substr(colonPos+1);
        cout<<"-This message is from "<<suffix<<endl;

    return 0;
}
/*
1
hello
-------------------------------------------

HozanHamdin
zanHamdin
Ham
HozanRanHamdin
SolenRanHamdin
SolenHamdin
----------------------------------
found
6
-This message is from ayoussef@gwu.edu

*/
