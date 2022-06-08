#include <iostream>
using namespace std;

int main()
{
    int n,reversedNumber=0,remainder;

    cout<<"Your Number: ";
    cin>>n;

    int mx=n%10;
    int Length=0;
    while(n!=0)
    {
        remainder=n%10;
        reversedNumber=reversedNumber*10+remainder;

        if(remainder>mx)
            mx=remainder;

        n/=10;
        Length++;
    }

    cout<<"Reversed Number="<<reversedNumber<<endl;
    cout<<"Max="<<mx<<endl;
    cout<<"length="<<Length<<endl;

    return 0;
}
/*
Output

Your Number: 1546
Reversed Number=6451
Max=6
length=4

Algorithm to solve:
step 1: input an integer number stored in n variable,
 and variable for Length: Length=0, and assume mx variable the first remainder for max.

step 2: the while loop is iterated until n!=0 is false.

step 3: In each iteration, the remainder when the value of n is divided by 10 is calculated,
reversedNumber is computed and the value of n is decreased 10 fold.

step 4:compare mx with remainder and increase the Length for each step

step 5: Finally, the reversedNumber (which contains the reversed number), mx and Length are printed on the screen.
*/
