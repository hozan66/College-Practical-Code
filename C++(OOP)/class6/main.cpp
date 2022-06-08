#include <iostream>
#include <cstring>
using namespace std;
class phone
{
   char name[20];
   char model[20];
   int price;
   public:
       phone(){}
       phone(char n[],char m[],int p)
       {
           strcpy(name,n);
           strcpy(model,m);
           price=p;
       }
       void print();
       ~phone();
};
phone::~phone()
{
  cout<<"object destructed\n";
}
void phone::print()
{
    cout<<"name="<<name<<endl;
    cout<<"model="<<model<<endl;
    cout<<"price="<<price<<endl;
}
int main()
{
    phone ob1,ob2("HUAWI","MATE",400);
    ob2.print();
    return 0;
}
/*
name=HUAWI
model=MATE
price=400
object destructed
object destructed

*/
