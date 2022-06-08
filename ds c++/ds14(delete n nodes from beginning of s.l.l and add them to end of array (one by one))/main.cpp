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
    int i,n,m;
    cout<<"How many nodes do you have: ";
    cin>>n;
    cout<<"enter the nodes: ";
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
            cout<<"\nenter size & elements of array: ";
            cin>>m;
            int a[m];
            for(i=0;i<m;i++)
                cin>>a[i];


                    cout<<"\nhow many elements do you want to delete: ";
                    cin>>n;
                    int d;
                    for(i=0;i<n;i++)
                    {
                        if(start==NULL)
                            cout<<"s.l.l is empty \n";
                            else
                            {
                                d=start->data;
                                p=start;
                                start=start->link;
                                delete p;
                                a[m++]=d;
                            }
                    }

                    cout<<"The New Array\n";
                    for(i=0;i<m;i++)
                        cout<<a[i]<<endl;

    return 0;
}
/*write a program to delete n nodes from beginning of s.l.l and add them to end of array (one by one)??
How many nodes do you have: 6
enter the nodes: 11 22 33 44 55 66

enter size & elements of array: 4 10 20 30 40

how many elements do you want to delete: 2
The New Array
10
20
30
40
11
22

*/
