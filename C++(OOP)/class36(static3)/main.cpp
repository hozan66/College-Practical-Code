#include <iostream>
#include <cstring>
using namespace std;
class student
{
    static int Count;  //variable Count common for all object
    char name[20];
    int first,second,Final,total,ID;
public:
    static void print_count()  //we can call it by two ways
    {
       cout<<"students constructed:"<<Count<<endl;
    }
    student()  //constructor
    {
        strcpy(name,"No Name");
        ID=0;
        first=second=Final=0;
        Count++;
        print_count();
    }
};
int student::Count=0;
int main()
{
    //student k;
    //k.print_count();
    student::print_count();  //direct call

    cout<<"\nconstruct 2 objects\n";
    student s1,s2;
    cout<<"\nconstruct 3 objects\n";
    student st[3];
    return 0;
}
/*
students constructed:0

construct 2 objects
students constructed:1
students constructed:2

construct 3 objects
students constructed:3
students constructed:4
students constructed:5

*/
