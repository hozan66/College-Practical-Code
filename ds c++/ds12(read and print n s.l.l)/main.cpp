#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
int const n=1;
node *start,*p,*k,*s[n];

void create(int m);
void print(int b);
int main()
{
    int *a;
    a=new int[n];
    int i,n,c,b;
    char ch;
    cout<<"How many single linked list do you have\n";
    cin>>n;
    for (i=0;i<n;i++)
    {
       cout<<"\ninput number of nodes\n";
    cin>>c;
    create(c);
    s[i]=start;
    }
    do
    {
        cout<<"which s.l.l you want to print\n";
        cin>>b;
        cout<<endl;
        print(b-1);
        cout<<"Do you want to print another s.l.l (Y/N)?? \n";
        cin>>ch;
        cout<<endl;
    }while(ch=='y'||ch=='Y');

    return 0;
}

void create(int m)
{
    int i;
    start=0;
    cout<<"enter the nodes\n";
    for (i=1;i<=m;i++)
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
}

void print(int b)
{
    p=s[b] ;
    while (p!=NULL)
    {
            cout<<p->data<<endl;
            p=p->link;
    }
}
/*read n single linked list??
How many single linked list do you have
3

input number of nodes
2
enter the nodes
99 88

input number of nodes
2
enter the nodes
77 66

input number of nodes
2
enter the nodes
55 44
which s.l.l you want to print
3

55
44
Do you want to print another s.l.l (Y/N)??
y

which s.l.l you want to print
1

99
88
Do you want to print another s.l.l (Y/N)??
n

*/

