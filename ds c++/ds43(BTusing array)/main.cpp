// this code for representing BT using array!
#include <iostream>
using namespace std;
char tree[]={'A','B','C','D','\0','\0','E'};
int maxnode=7;

int getleftchild(int i);
int getrightchild(int i);
int getparent(int i);
bool isleaf(int i);
int main( )
{
       int i,j;
       cout<<"A B C D - - E \n";
       cout<<"Enter index of node from 0 to 6: ";
       cin>>i;                                      // i  is an index of a node in the array
       cout<<endl;
        cout<<"left child of "<<tree[i];
        if(getleftchild(i)==-1)
            cout<<": No left child\n";
        else
        {
            j=getleftchild(i);
            cout<<": "<<tree[j]<<endl;;
        }
        cout<<endl<<endl;

        cout<<"right child of "<<tree[i];
        if (getrightchild(i)==-1)
            cout<<": No right child\n";
        else
           {
                 j=getrightchild(i);
                 cout<<": "<<tree[j]<<endl;
           }
        cout<<endl<<endl;

        cout<<"parent of "<<tree[i];
            if (getparent(i)==-1)
               cout<<": No parent\n";
            else
                {
                    j=getparent(i);
                    cout<<": "<<tree[j]<<endl;
                }
        cout<<endl<<endl;

        cout<<tree[i];
            if (isleaf(i)==0)
                cout<<": is Not a leaf\n";
            else
                cout<<": is a leaf\n";
return 0;
}

// this function returns index of node as left child of index i
int getleftchild(int i)
{
    if (tree[i]!='\0' && (2*i+1) < maxnode && tree[2*i+1]!='\0')
        return (2*i+1);
    else
      return (-1);
}

// this function returns index of node as right child of index i
int getrightchild(int i)
{
    if (tree[i]!='\0' && (2*i+2) < maxnode && tree[2*i+2]!='\0')
        return (2*i+2);
    else
      return (-1);
}

// this function returns index of node as parent of index i
int getparent(int i)
{
   if (tree[i]!='\0' && (i > 0) && i < maxnode) //root has no parent
      return (i-1)/2;
   else
      return (-1);
}

// this function returns true if the node in index I is leaf or returns false if the node in index i is not leaf
bool isleaf(int i)
{
  // to check if both the children of the node are null or not
  int L,R;
   L=getleftchild(i);
   R=getrightchild(i);
    if (tree[L]=='\0' && tree[R]=='\0' && tree[i]!='\0' && i < maxnode)
        return true;
    else
       return false;
}
