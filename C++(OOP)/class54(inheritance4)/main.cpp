//multiple inheritance
#include <iostream>
#include <cstring>
using namespace std;
class name
{
    char n[20];
protected:
    void set_name(char N[])
    {
        strcpy(n,N);
    }
    void print_name()
    {
        cout<<n<<" ";
    }
};

class ID
{
    int id;
protected:
    void set_id(int i)
    {
        id=i;
    }
    void print_id()
    {
        cout<<id<<endl;
    }
};

class student : public name, public ID
{
public:
    student(char Name[],int Id)
    {
        set_name(Name);
        set_id(Id);
    }
    void print()
    {
        print_name();
        print_id();
    }
};

int main()
{
    student ST("hozan",1450902032);
    ST.print();
    return 0;
}
/*
hozan 1450902032

*/
