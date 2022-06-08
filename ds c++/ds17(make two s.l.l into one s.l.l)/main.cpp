#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};

node *p,*k,*start,*start1,*start2;
int main()
{
    int n,i;
    cout << "Enter number of node(s) of the first s.l.l: ";
    cin >> n;
    cout << "Enter " << n << " nodes\n";
    for(i = 1; i <= n; i++) {
        p = new node;
        cin >> p -> data;
        p -> link = 0;
        if(start1 == 0) {

            start1 = p;
            k = p;

        } else {

            k -> link = p;
            k = p;
        }
    }

         cout << "Enter number of node(s) of the second s.l.l: ";
    cin >> n;

    cout << "Enter " << n << " nodes\n";

    for(i = 1; i <= n; i++) {

        p = new node;
        cin >> p -> data;
        p -> link = 0;

        if(start2 == 0) {

            start2 = p;
            k = p;

        } else {

            k -> link = p;
            k = p;

        }
    }
    cout<<endl;

    start=start1;
    p=start;
    while(p->link!=0)
        p=p->link;
    p->link=start2;

    cout<<"New S.L.L\n";
    p=start;
    while(p!=0)
    {
     cout<<p->data<<endl;
     p=p->link;
    }
       return 0;
}
/*write a program to make two s.l.l into one s.l.l??
Enter number of node(s) of the first s.l.l: 4
Enter 4 nodes
1 2 3 4
Enter number of node(s) of the second s.l.l: 5
Enter 5 nodes
5 6 7 8 9

New S.L.L
1
2
3
4
5
6
7
8
9

*/
