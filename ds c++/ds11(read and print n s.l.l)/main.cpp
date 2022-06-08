#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *start,*k,*p;
node *mulsll();
int main()
{
    int i,n;
   cout<<"How many s.l.l do you have\n";
   cin>>n;
   node *a[n];
   for(i=0;i<n;i++)
        a[i]= mulsll();

        cout<<endl;
           for(i=0;i<n;i++)
        {
            start=a[i];
            p=start;
            while(p!=NULL)
            {
                cout<<p->data<<endl;
                p=p->link;
            }
            cout<<endl;
        }
    return 0;
}

node *mulsll()
{
    start=0; //watch out
    int n,i;
    cout<<"How many nodes do you have\n";
    cin>>n;
     cout<<"Enter your nodes\n";
    for(i=1;i<=n;i++)
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
     cout<<endl;
     return start;
}
/*read and print n s.l.l??
How many s.l.l do you have
3
How many nodes do you have
3
Enter your nodes
11
22
33

How many nodes do you have
3
Enter your nodes
44 55 66

How many nodes do you have
3
Enter your nodes
77 88 99


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
