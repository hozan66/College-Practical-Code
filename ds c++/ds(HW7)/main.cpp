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
    int n,i,pos;
     cout<<"how many nodes do you have\n";
    cin>>n;
    cout<<"Enter the nodes\n";
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

     cout<<"which node do you want to print\n";
     cin>>pos;
            i=1;
            p=start;
             while(p!=NULL)
             {
                 if(pos==i)
                 cout<<p->data<<endl;
                 else
                  p=p->link;
                  i++;
             }
          return 0;
}
/*print the data in kth node??
how many nodes do you have
5
Enter the nodes
11 22 33 44 55
which node do you want to print
4
44

*/
