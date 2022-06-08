#include <iostream>
using namespace std;
/*the things that is inherited
constructor and destructor
operator=()
friends
*/
class mother
{
public:
    mother()
    {
        cout<<"mother:empty constructor\n";
    }
    mother(int a)
    {
        cout<<"mother:parameterize constructor="<<a<<endl;
    }
};

class daughter : public mother
{
public:
    daughter()
    {
        cout<<"daughter:empty constructor\n\n";
    }
    daughter(int a)
    {
        cout<<"daughter:parameterize constructor="<<a<<"\n\n";
    }
};

class son : public mother
{
public:
    son(int a) : mother(a)
    {
        cout<<"son:parameterize constructor="<<a<<endl;
    }
};

int main()
{
    daughter sara(1);
    daughter nor;

    son ali(5);
    return 0;
}
/*
mother:empty constructor
daughter:parameterize constructor=1

mother:empty constructor
daughter:empty constructor

mother:parameterize constructor=5
son:parameterize constructor=5

*/
