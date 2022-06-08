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
    node *start=NULL;
    int n,i;
    cout<<"How many nodes?\n";
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
            p=start; //output here like array
    while(p!=NULL){
                cout<<p->data<<endl;
            p=p->link;}

            cout<<"\nsolve in another way\n";

            for(node* i=start;i!=NULL;i=i->link)
                 cout<<i->data<<endl;

    return 0;
}
/*
How many nodes?
3
11
22
33

11
22
33

solve in another way
11
22
33

*/
