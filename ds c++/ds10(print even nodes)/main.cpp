#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
int main()
{
  node *p,*k,*start=NULL;
  int i,n;
  cout<<"How many nodes do you have\n";
  cin>>n;
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
  p=start->link;
for(node *i=p;i!=NULL;i=i->link)
{
    cout<<i->data<<endl;
    i=i->link;
}

    return 0;
}
/*print even position nodes??
How many nodes do you have
7
25 20 21 23 27 65 11

20
23
65

*/
