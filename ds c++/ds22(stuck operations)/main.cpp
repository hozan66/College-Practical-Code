#include <iostream>
using namespace std;
int const siz=20;
int a[siz];
int top =-1;

void push();
void pop();
bool checkempty();
bool ckeckfull();
void print();

int main()
{
    int ch;
    do
    {
        cout<<"press 0 for exit\n";
        cout<<"press 1 for print\n";
        cout<<"press 2 for push\n";
        cout<<"press 3 for pop\n";

        cout<<"Enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 0: break;
            case 1: print(); break;
            case 2: push(); break;
            case 3: pop(); break;
            default: cout<<"wrong choice\n";
        }

    }while(ch!=0);

    return 0;
}
bool checkempty()
{
    if(top==-1)
    return true;
    else
        return false;

}
bool ckeckfull()
{
   if(top==siz-1)
        return true;
    else
        return false;
}

void push()
{
    int newitem;
    if(ckeckfull())
            cout<<"the stuck is full\n";

    else
    {
       cout<<"enter an element to push it into stuck\n";
        cin>>newitem;
        top++;
        a[top]=newitem;
    }

}

void pop()
{
  if(checkempty())
    cout<<"the stuck is empty\n";

    else
    {
        cout<<"the deleted element="<<a[top]<<endl;
        top--;
    }

}

void print()
{
    int i;
    if(checkempty())
    cout<<"the stuck is empty\n";

    else
    {
        for(i=top;i>=0;i--)
            cout<<a[i]<<endl;
    }
}
