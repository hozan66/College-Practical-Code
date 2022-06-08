/*
Q16) Write recursive in c++ to find summation 1+2+3+.....n ??
*/
#include <iostream>
using namespace std;
int f(int n){
   if(n==0)
        return 0;
   else
   return n+f(n-1);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"sum="<<f(n)<<endl;
    return 0;
}
