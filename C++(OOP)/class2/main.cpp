#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int id;
    public:
       student()
       {
           cout<<"Empty Constructor\n";
           name="No Name";
           id=0000000;
       }
       student(string n,int i)
       {
           cout<<"Parameterize Constructor\n";
           name=n;
           id=i;
       }
       void print()
       {
           cout<<"name="<<name<<endl;
           cout<<"id="<<id<<endl<<endl;
       }
};
int main()
{
    student ob1,ob2("Mohammed",425241293);
    ob1.print();
    ob2.print();
    return 0;
}
/*
Empty Constructor
Parameterize Constructor
name=No Name
id=0

name=Mohammed
id=425241293

*/
