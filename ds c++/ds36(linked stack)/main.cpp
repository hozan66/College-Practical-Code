#include <iostream>
using namespace std;
struct node

{
    int data;
    node *link;
};
node *top=NULL,*p;
void print();
void push();
void pop();

int main()
{
    int ch;
    do
    {
        cout<<"press 0 for exit\n";
        cout<<"press 1 for print\n";
        cout<<"press 2 for push\n";
        cout<<"press 3 for pop\n";

        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch)
        {
            case 0:break;
            case 1:print();break;
            case 2:push();break;
            case 3:pop();break;
            default :cout<<"wrong choice\n";
        }
        cout<<endl;
    }while(ch!=0);

    return 0;
}

void print()
{
  if(top==NULL)
     cout<<"s.l.l is empty\n";
        else
        {
                  p=top;
              while(p!=NULL)
              {
                  cout<<p->data<<endl;
                  p=p->link;
              }
        }
}

void push()
{
    cout<<"enter a new element: ";
    p=new node;
    cin>>p->data;
    p->link=NULL;

    if(top==NULL)
    top=p;
    else
    {
        p->link=top;
        top=p;
    }
}

void pop()
{
    if(top==NULL)
     cout<<"s.l.l is empty\n";
        else
        {
          p=top;
        top=top->link;
        delete p;
        }
}
