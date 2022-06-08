#include <iostream>
using namespace std;
class  base
{
    int i; //private to class base
protected:
    int h;
public:
    int j,k;
    void seti(int x)
    {
        i=x;
    }
    int geti()
    {
        return i;
    }
};

class derived : private base
{
public:
    base::j;     //make j public again
    base::seti;  //make seti() public
    base::geti;  //make geti() public

    // base::i    //error because it's private to private we can't make it public
    int a;
    base::h;     //make h public
};

int main()
{
    derived ob;
    // ob.i=10  //error
    ob.j=20;
    // ob.k;    //error because k is private for class derived
    ob.a=40;
    ob.seti(10);
    ob.h=5;

    cout<<ob.h<<" ";
    cout<<ob.geti()<<" ";
    cout<<ob.j<<" ";
    cout<<ob.a<<endl;
    return 0;
}

/*
5 10 20 40

*/
