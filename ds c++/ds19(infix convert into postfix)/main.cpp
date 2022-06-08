#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;
int priority(char c){
    if (c == '-' || c == '+')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^')
        return 3;
    else
        return 0;


}
string infix_to_postfix(string exp){
stack<char> stk;   //for create empty stack of characters
string output="";  //for create empty string
//--------
for(int i=0; i< exp.length();i++){
    if(exp[i] == ' ') continue;

    if(isdigit(exp[i]) || isalpha(exp[i]))
        output+=exp[i];
    else if (exp[i] == '(')
                stk.push('(');
    else if (exp[i] == ')'){
       while(stk.top() != '('){
            output +=stk.top();
            stk.pop();
          }
        stk.pop();//remove the '('
    }
    else{
            while (!stk.empty() && priority(exp[i]) <= priority(stk.top()))
                   {
                       output += stk.top();
                       stk.pop();
                   }
        stk.push(exp[i]);
    }

}
      while(!stk.empty())
      {
          output+= stk.top();
          stk.pop();
      }
      return output;
}
int main()
{

    string infixExpression = ("(3+2)+7/2*((7+3)*2)");

    cout << infix_to_postfix(infixExpression) << endl;
    return 0;
}
/*convert infix into postfix
32+72/73+2**+
*/
