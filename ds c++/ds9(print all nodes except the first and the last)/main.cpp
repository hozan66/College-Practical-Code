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
  cout<<"How many nodes do you have: ";
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
for(node *i=p;i->link!=NULL;i=i->link)
    cout<<i->data<<endl;
    return 0;
}
/*print all nodes except the first and the last??
How many nodes do you have:
7
45
65
85
98
36
12
70

65
85
98
36
12

*/
