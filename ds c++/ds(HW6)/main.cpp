#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *start1,*start2,*p,*k;
int main()
{
    int n,i;
     cout<<"how many nodes do you have in the first s.l.l\n";
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

     cout<<"\nhow many nodes do you have in the second s.l.l\n";
    cin>>n;
    cout<<"Enter the nodes\n";
    for(i=1;i<=n;i++)
    {
    p=new node;
    cin>>p->data;
    p->link=NULL;

     if(start2==NULL)
     {
         start2=p;
         k=p;
     }
     else
     {
         k->link=p;
         k=p;
     }
    }

    cout<<"\nMerge of two s.l.l\n";
        p=start1;
        while(p->link!=NULL)
            p=p->link;
            p->link=start2;

            p=start1;
             while(p!=NULL)
             {
                 cout<<p->data<<endl;
                  p=p->link;
             }

    return 0;
}
/*Merge of two s.l.l??
how many nodes do you have in the first s.l.l
5
Enter the nodes
11 22 33 44 55

how many nodes do you have in the second s.l.l
4
Enter the nodes
66 77 88 99

Merge of two s.l.l
11
22
33
44
55
66
77
88
99

*/
