#include <iostream>
#include <stack>
//Q) search for specific character in the stack
using namespace std;
int main()
{
   stack<char> stk;
   string str="hozan";
   char ch='h';
   int flag=0;

   for(int i=0;i<str.length();i++)
       {
           stk.push(str[i]);
       }

   for(int i=0;i<str.length();i++)
       {
           if(stk.top()==ch)
           {
               flag=1;
               break;
           }
           stk.pop();
       }
   if(flag==1)
    cout<<"found"<<endl;
   else
    cout<<"not found"<<endl;
    //found
    return 0;
}
