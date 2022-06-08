//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                                          //
//  Q: write a program to split a s.l.l into two s.l.l, the first s.l.l has even numbers and the second has odd numbers ?   //
//                                                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

struct node {

    int data;
    node *link;

};

node *p, *k, *k2, *start, *start1, *start2;


int main() {

    int n;
    cout << "Enter number of node(s): ";
    cin >> n;

    cout << "Enter " << n << " nodes\n";

    for(int i = 1; i <= n; i++) {

        p = new node;
        cin >> p -> data;
        p -> link = 0;


        if(start == 0) {

            start = p;
            k = p;

        } else {

            k -> link = p;
            k = p;

        }

    }

    p = start;

    while(p != 0) {

        if(p -> data % 2 == 0) {

            if(start1 == 0)  {

                start1 = p;
                k = p;

            } else {

                k -> link = p;
                k = p;

            }


        } else {

            if(start2==NULL) {

                start2 = p;
                k2 = p;

            } else {

                k2 -> link = p;
                k2 = p;

            }

        }

        p=p->link;

    }

    k -> link = 0;
    k2 -> link = 0;

    cout << "\nEven S.L.L: \n";
    p = start1;

    while(p != 0) {

        cout << p -> data << " ";
        p = p -> link;

    }



    cout << "\n\nOdd S.L.L: \n";
    p=start2;

    while(p != 0) {

        cout << p -> data << " ";
        p = p -> link;

    }

       return 0;
}
/*
Enter number of node(s): 10
Enter 10 nodes
1 2 3 4 5 6 7 8 9 10

Even S.L.L:
2 4 6 8 10

Odd S.L.L:
1 3 5 7 9
*/
