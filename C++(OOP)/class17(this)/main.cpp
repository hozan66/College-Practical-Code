#include <iostream>
using namespace std;
class student
{
    int id;
public:
    void set_id(int id)
    {
        this->id=id; //by this method compiler know how to differentiate between them
    }
    void print_id()
    {
        cout<<"ID is: "<<id<<endl;
    }
};
int main()
{
    student st;
    st.set_id(10);
    st.print_id();

    return 0;
}
/*
ID is: 10
*/
