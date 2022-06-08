#include <iostream>
#include <cstring>
using namespace std;
class student
{
private:
    char name[20];
    int ID;
public:
    student()
    {
        cout<<"object created\n";
    }
    ~student()
    {
        cout<<"object destructed\n";
    }
    void Set_Name_ID(char n[],int id)
    {
        strcpy(name,n);
        ID=id;
    }
    void print(void)//means nothing inside parameters
    {
        cout<<name<<"\t"<<ID<<endl;
    }
};
void f(student s)
{
    student s1;
    s1=s;
    s.Set_Name_ID("Sami",12345);
    s.print();
    s1.print();
}
int main()
{
    student st1,st2;
    st1.Set_Name_ID("Ahmad",11111);
    st2.Set_Name_ID("Ali",22222);
    cout<<"Going to function\n";
    f(st1);
    cout<<"Back from function\n";
    st1.print();

    return 0;
}
/*
object created
object created
Going to function
object created
Sami    12345
Ahmad   11111
object destructed
object destructed
Back from function
Ahmad   11111
object destructed
object destructed

*/
