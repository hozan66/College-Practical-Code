#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *start,*p,*k;
int const z=20;
int a[z];
int main()
{
    int n,i;
     cout<<"how many nodes do you have \n";
    cin>>n;
    cout<<"Enter the nodes\n";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;

    for(i=0;i<n;i++)
    {
    p=new node;
    p->data=a[i];
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

    cout<<endl<<"Copy of nodes\n";
        p=start;
        while(p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->link;
        }
    return 0;
}
/*copy array to s.l.l??
how many nodes do you have
6
Enter the nodes
11 22 33 44 55 66


Copy of nodes
11
22
33
44
55
66

*/
