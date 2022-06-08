#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
int main()
{
    node *p,*k;
    node *start1=NULL,*start2=NULL;
    int n,i;
    cout<<"How many nodes: ";
    cin>>n;
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
    cout<<endl;


         for(i=1;i<=n;i++)
         {
             p=start1;
             start1=start1->link;
             p->link=NULL;

             if(start2==NULL)
             {
                 start2=p;
             }
             else
             {
                 p->link=start2;
                 start2=p;
             }
         }


            cout<<"\ninverse of s.l.l\n";
            p=start2;
            while(p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->link;
        }

    return 0;
}
/*??inverse of s.l.l
How many nodes: 7
11 22 33 44 55 66 77


inverse of s.l.l
77
66
55
44
33
22
11

*/
