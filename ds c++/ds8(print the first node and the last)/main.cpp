#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
int main()
{
  node *p,*k,*start;
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
for(p=start;p!=NULL;p=p->link)
if(p==start||p->link==NULL)
    cout<<p->data<<endl;
    return 0;
}
/*print the first node and the last??
How many nodes do you have
6
85 98 45 10 20 60

85
60

*/
