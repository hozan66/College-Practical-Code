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
    int n,i,x=0;
    char ch;
    cout<<"Enter the nodes\n";
    do
    {
    p=new node;
    cin>>p->data;
    p->link=NULL;
       x++;
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
     cout<<"Do you want to enter another node?? (Y/N)\n";
     cin>>ch;
    }while(ch=='y'||ch=='Y');
    cout<<"Number of nodes="<<x<<endl;
    return 0;
}
/*find the number of nodes in s.l.l??
Enter the nodes
54
Do you want to enter another node?? (Y/N)
y
65
Do you want to enter another node?? (Y/N)
y
51
Do you want to enter another node?? (Y/N)
y
69
Do you want to enter another node?? (Y/N)
y
33
Do you want to enter another node?? (Y/N)
n
Number of nodes=5

*/
