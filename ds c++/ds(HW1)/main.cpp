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
    {
    p=new node;
    cin>>p->data;
    a[i]=p->data;
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
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
    return 0;
}
/*copy s.l.l to array??
how many nodes do you have
5
Enter the nodes
11 22 33 44 55

Copy of nodes
11
22
33
44
55

*/
