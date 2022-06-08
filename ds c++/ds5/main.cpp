#include <iostream>
using namespace std;
struct node
{
    int id;
    string name;
    node *link;

};
int main()
{
    node *p,*k,*start;
    p=new node;
    cout<<"enter id & name\n";
    cin>>p->id>>p->name;
    p->link=NULL;

       k=new node;
    cout<<"enter id & name\n";
    cin>>k->id>>k->name;
    k->link=NULL;

    start=p;
    p->link=k;

     p=k;
    k->link=NULL;

    cout<<endl<<start->id<<"\t"<<start->name<<endl;

    cout<<endl<<p->id<<"\t"<<p->name<<endl;
    return 0;
}
/*
enter id & name
123 hoz
enter id & name
321 ali

123     hoz

321     ali

*/
