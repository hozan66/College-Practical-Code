#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *start,*p,*k;
int main()
{
    int n,i;
cout<<"how many nodes do you have \n";
    cin>>n;
    cout<<"Enter the nodes\n";
    for(i=0;i<n;i++)
    {
    p=new node;
    cin>>p->data;
    p->link=NULL;

     if(start==NULL)
     {
         start=p;
         k=p;
     }
     else
     {
         k->link=p;
         k=p;
     }
    }
      p=start;
      while(p->link!=NULL)
        p=p->link;
      start->data=p->data;

      cout<<endl<<"Our new nodes\n";
      p=start;
      while(p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->link;
        }
    return 0;
}
/*copy the last node at beginning of s.l.l??
how many nodes do you have
4
Enter the nodes
11
22
33
44

Our new nodes
44
22
33
44

*/
