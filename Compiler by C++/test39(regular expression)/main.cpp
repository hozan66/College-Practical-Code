#include <iostream>
using namespace std;
//Write a program for Regular Expression (ab)^+   c
int main()
{
  string str;
  cout<<"Enter a Regular Expression: ";
  cin>>str;
  cout<<endl;

  int n=str.length();
  int i,flag=1;

  if(str[0]=='a' && str[1]=='b' && str[n-1]=='c')
  {
      for(i=2;i<n-1;i+=2)
          {
              if(str[i]!='a' && str[i+1]!='b')
                  {
                      flag=0;
                      break;
                  }
          }
  }
  else
    flag=0;


    if(flag==1)
        cout<<"Accept"<<endl;
    else
        cout<<"Not Accept"<<endl;

    return 0;
}
