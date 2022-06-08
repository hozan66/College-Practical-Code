#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int i;
    srand(time(0));
    for(i=0;i<20;i++)
        cout<<rand()%10<<endl;      //every time I run the program it will print different random numbers
    return 0;
}
