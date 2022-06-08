//Write a function that returns the number of digits in a given null-terminated string.
#include<iostream>
#include<cctype>
using namespace std;
int numAlphas(const char* s)
{
  int Count = 0;
    for (int i = 0; s[i] != '\0'; i++)
        {
            if (isdigit(s[i]))
                Count++;
        }
return Count;
}
int main()
{
    char str[] = "a12bc3d";
    cout << numAlphas(str);  //3
}
