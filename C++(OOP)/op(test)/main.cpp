#include <iostream>

using namespace std;

int main()
{
    float x=0.01;
    if(x==float(0.01))               //here in conditional statement 0.01 from float type (only float) we have to manipulate like this
    cout << "Hello world!" << endl;   //in double type we don't have problem
    else
        cout << "what!" << endl;
    return 0;
}
/*
Hello world!

*/
