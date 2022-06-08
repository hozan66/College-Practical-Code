#include <iostream>
using namespace std;

struct node
{
    int data;
    node *link;
};
node *p,*k,*Front=NULL,*Back=NULL;

void Enqueue();
void Dequeue();
void print();

int main()
{
    int ch;
    do
    {
        cout<<"press 0 for exit\n";
        cout<<"press 1 for print\n";
        cout<<"press 2 for Enqueue\n";
        cout<<"press 3 for Dequeue\n";

        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 0:break;
            case 1:print();break;
            case 2:Enqueue();break;
            case 3:Dequeue();break;
            default : cout<<"Wrong Choice\n";
        }
        cout<<endl;
    }while(ch!=0);

    return 0;
}

void Enqueue()
{
    cout<<"Enter New Node: ";
    p=new node;
    cin>>p->data;
    p->link=NULL;

      if(Back==NULL)
      {
          Front=p;
          Back=p;
      }
      else
      {
          Back->link=p;
          Back=p;
      }
}

void Dequeue()
{
     if(Front==NULL)
        cout<<"Queue is Empty\n";
        else if(Back==Front)
        {
            p=Front;
            Back=NULL;
            Front=NULL;
            delete p;
        }
        else
        {
           p=Front;
            Front=Front->link;
            delete p;
        }
}

void print()
{
    if(Front==NULL)
        cout<<"Queue is Empty\n";
        else
        {
            p=Front;
            while(p!=NULL)
            {
                cout<<p->data<<endl;
                p=p->link;
            }
        }
}
