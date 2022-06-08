/*
Q14) Write c++ code to create and print double linked list??
*/
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};

node *start,*p,*k;

void print();

int main()
{
    int i,n,ch;
   cout<<"enter size of D.l.l & the nodes: ";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       p=new node;
       cin>>p->data;
       p->next=NULL;
        p->prev=NULL;

           if(start==NULL)
           {
               start=p;
               k=p;
           }
           else
           {
               k->next=p;
               p->prev=k;
               k=p;
           }
   }

   cout<<"D.L.L\n";
   print();
    return 0;
}

void print()
{
    if(start==NULL)
    cout<<"D.l.l is empty\n";
    else
    {
        p=start;
        while(p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->next;
        }
    }
}
/*
enter size of D.l.l & the nodes: 6
11 22 33 44 55 66
D.L.L
11
22
33
44
55
66

*/
