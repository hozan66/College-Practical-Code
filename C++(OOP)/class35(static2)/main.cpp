#include <iostream>
#include <cstring>
using namespace std;
class student
{
    static int Count;  //variable Count common for all object
    char name[20];
    int first,second,Final,total,ID;
public:
    student()  //constructor
    {
        strcpy(name,"No Name");
        ID=0;
        first=second=Final=0;
        Count++;
        cout<<"Number of  students constructed:"<<Count<<endl;
    }
};
int student::Count=0;
int main()
{
    cout<<"\nconstruct 2 objects\n";
    student s1,s2;
    cout<<"\nconstruct 3 objects\n";
    student st[3];
    return 0;
}
/*

construct 2 objects
Number of  students constructed:1
Number of  students constructed:2

construct 3 objects
Number of  students constructed:3
Number of  students constructed:4
Number of  students constructed:5

*/
