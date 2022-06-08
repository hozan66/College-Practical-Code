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
    cout<<"How many nodes do you have in the first s.l.l\n";
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

    cout<<"\nHow many nodes do you have in the second s.l.l\n";
    cin>>n;
    cout<<"enter the nodes\n";
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
            cout<<"\nwhich position you want to add second s.l.l\n";
            cin>>pos;
            i=1;
            if(pos==1)
            {
             k=start1;
             start1=start2;
             p=start2;
             while(p->link!=NULL)
                        p=p->link;

                         p->link=k;
            }
            else
            {
                        p=start1;
                    while(i!=pos-1)
                    {
                        p=p->link;
                        i++;
                    }
                    k=p->link;
                    p->link=start2;

                    p=start2;
                    while(p->link!=NULL)
                        p=p->link;
                    p->link=k;
            }


            cout<<"NEW S.L.L\n";
            p=start1;
            while(p!=NULL)
            {
                cout<<p->data<<endl;
                p=p->link;;
            }
    return 0;
}
/*write a program to copy 2nd s.l.l in any position of 1st s.l.l??
How many nodes do you have in the first s.l.l
5
enter the nodes
11
22
33
44
55

How many nodes do you have in the second s.l.l
2
enter the nodes
66
99

which position you want to add second s.l.l
3
NEW S.L.L
11
22
66
99
33
44
55

*/
