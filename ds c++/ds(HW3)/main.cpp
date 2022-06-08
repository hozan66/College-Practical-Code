#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *start1,*start2,*p,*k,*x,*y;
int main()
{
    int n,i;
     cout<<"how many nodes do you have \n";
    cin>>n;
    cout<<"Enter the nodes\n";
    for(i=1;i<=n;i++)
    {
    p=new node;
    cin>>p->data;
    p->link=NULL;

     if(start1==NULL)
     {
         start1=p;
         k=p;
     }
     else
     {
         k->link=p;
         k=p;
     }
    }

    p=start1;
    for(i=1;i<=n;i++)
    {
    x=new node;
    x->data=p->data;
   x->link=NULL;
     p=p->link;

     if(start2==NULL)
     {
         start2=x;
         y=x;
     }
     else
     {
         y->link=x;
         y=x;
     }
    }

    cout<<endl<<"Copy of nodes\n";
        x=start2;
        while(x!=NULL)
        {
            cout<<x->data<<endl;
            x=x->link;
        }
    return 0;
}
/*copy s.l.l in s.l.l??
how many nodes do you have
3
Enter the nodes
11 22 33

Copy of nodes
11
22
33

*/
