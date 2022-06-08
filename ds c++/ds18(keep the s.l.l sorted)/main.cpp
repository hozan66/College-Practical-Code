#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};

node *start,*k,*p,*d;
void print();

int main()
{
    int i,n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter "<<n<<" Sorted Node: \n";
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

      cout<<"The Nodes YOU Entered: ";
        print();

        cout<<"\nEnter new node: ";
        k=new node;
        cin>>k->data;
        k->link=NULL;

            if(k->data <= start->data)
            {
                k->link=start;
                start=k;
            }
            else
            {
                p=start;
                while(k->data > p->data && p->link!=NULL)
                {
                    d=p;
                    p=p->link;
                }
                if(p->link==NULL && k->data > p->data)
                    p->link=k;
                else
                {
                    k->link=d->link;
                    d->link=k;
                }
            }

            print();
    return 0;
}

void print()
{
    p=start;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->link;
    }
}
/*??Add a node to sorted S.L.L(keep S.l.l sorted)
Enter number of nodes: 3
Enter 3 Sorted Node:
3
6
9
The Nodes YOU Entered: 3 6 9
Enter new node: 7
3 6 7 9
*/
