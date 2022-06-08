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
    int i,n,pos;
    cout<<"How many nodes do you have in the s.l.l\n";
    cin>>n;
    cout<<"enter the nodes\n";
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
            cout<<"\nwhich position you want to split the s.l.l\n";
            cin>>pos;
            if(start1==NULL)
                cout<<"the s.l.l is empty \n";
            else if(pos==1)
            cout<<"you can't split in position one(because you have one node)\n";
            else
            {
                   i=1;
                p=start1;
                while(i!=pos-1)
                {
                    p=p->link;
                    i++;
                }
                start2=p->link;
                p->link=NULL;
            }

                cout<<"first part of S.L.L\n";
                p=start1;
                while(p!=NULL)
                {
                    cout<<p->data<<endl;
                    p=p->link;
                }
                     cout<<"\nsecond part of S.L.L\n";
                p=start2;
                while(p!=NULL)
                {
                    cout<<p->data<<endl;
                    p=p->link;
                }

    return 0;
}
/*write a program to split s.l.l into two parts in any position??
How many nodes do you have in the s.l.l
6
enter the nodes
11
22
33
44
55
66

which position you want to split the s.l.l
4
first part of S.L.L
11
22
33

second part of S.L.L
44
55
66

*/
