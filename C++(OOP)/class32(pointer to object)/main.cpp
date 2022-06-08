#include <iostream>
#include <cstring>
using namespace std;
class student
{
    char name[20];
    int ID;
public:
    student()
    {
        cout<<"empty constructor\n";
        strcpy(name,"NO Name");
        ID=0;
    }
    student(char n[],int id)
    {
        cout<<"parameterize constructor\n";
        strcpy(name,n);
        ID=id;
    }
   void print(void)
    {
        cout<<name<<"\t"<<ID<<endl;
    }
};
int main()
{
    student s1("Ali",123),s2("Ahmed",456);
    student arr[3]={s1,s2};
   // student arr[3]={student("hoz",123),student("ham",456),student("nor",789)};
    for(int i=0;i<3;i++)
        arr[i].print();

        cout<<"____________________________________________\n";
        student *p;
        p=arr;   //p=&arr[0];
        for(int i=0;i<3;i++)
          (p+i)->print();       //(p++)->print(); here address of p it will be changed
    return 0;
}
/*
parameterize constructor
parameterize constructor
empty constructor
Ali     123
Ahmed   456
NO Name 0
____________________________________________
Ali     123
Ahmed   456
NO Name 0

*/
