#include <iostream>
#include <cstring>  //or #include <string.h>
using namespace std;
int main ()
{
 string str1 = "Hello";
 string str2 = "World";
 string str3;
 int len1,len2 ;
 // copy str1 into str3
 str3 = str1;
 cout << "str3 : " << str3 << endl;
 // concatenates str1 and str2
 str3 = str1 + str2;
 cout << "str1 + str2 : " << str3 << endl;
 // total lenghth of str3 after concatenation
 len1 = str3.size();
 cout << "str3.size() : " << len1 << endl;

 len2 = str3.length();
 cout << "str3.length() : " << len2 << endl;
 return 0;
}
/*
str3 : Hello
str1 + str2 : HelloWorld
str3.size() : 10
str3.length() : 10

*/
