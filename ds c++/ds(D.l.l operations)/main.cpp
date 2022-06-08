#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};

node *start,*p,*k;

void print();
void addbegin();
void addend();
void addanypos();
void deletebegin();
void deleteend();
void deleteanypos();

int main()
{
    int i,n,ch;
   cout<<"enter size of D.l.l & the nodes\n";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       p=new node;
       cin>>p->data;
       p->next=NULL;
        p->prev=NULL;

           if(start==NULL)
           {
               start=p;
               k=p;
           }
           else
           {
               k->next=p;
               p->prev=k;
               k=p;
           }
   }

           do{

                           cout<<"press 0 for exit\n";
                           cout<<"press 1 for print\n";
                           cout<<"press 2 for add a node at beginning\n";
                           cout<<"press 3 for add a node at end\n";
                           cout<<"press 4 for add a node at any position\n";
                           cout<<"press 5 for delete a node from beginning\n";
                           cout<<"press 6 for delete a node from end\n";
                           cout<<"press 7 for delete a node from any position\n";

            cout<<"Enter your choice\n";
            cin>>ch;
            switch(ch)
            {
                case 0:break;
                case 1:print(); break;
                case 2:addbegin();break;
                case 3:addend();break;
                case 4:addanypos(); break;
                case 5:deletebegin(); break;
                case 6:deleteend(); break;
                case 7:deleteanypos(); break;
                default : cout<<"Wrong choice\n";

            }

           }while(ch!=0);


    return 0;
}

void print()
{
    if(start==NULL)
    cout<<"D.l.l is empty\n";
    else
    {
        p=start;
        while(p!=NULL)
        {
            cout<<p->data<<endl;
            p=p->next;
        }
    }
}

void addbegin()
{
    cout<<"enter the node\n";
    p=new node;
    cin>>p->data;
    p->next=NULL;
    p->prev=NULL;

    if(start==NULL)
        start=p;
        else
        {
            p->next=start;
            start->prev=p;
            start=p;
        }
}

void addend()
{
    cout<<"enter the node\n";
    k=new node;
    cin>>k->data;
    k->next=NULL;
    k->prev=NULL;

    if(start==NULL)
        start=k;
        else
        {
            p=start;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=k;
            k->prev=p;
        }
}

void addanypos()
{
    int i=1,pos;

    cout<<"enter the element\n";
    k=new node;
    cin>>k->data;
    k->next=NULL;
    k->prev=NULL;

    if(start==NULL)
        start=k;
    else{
            cout<<"enter the position\n";
              cin>>pos;
              if(pos==1)
              {
            k->next=start;
            start->prev=k;
            start=k;
              }
              else
              {
                        p=start;
                    while(i!=pos-1)
                    {
                        p=p->next;
                       i++;
                    }

                        k->next=p->next;
                        p->next->prev=k;
                        p->next=k;
                        k->prev=p;              // we can't add at end here
              }


    }
}

void deletebegin()
{
    if(start==NULL)
        cout<<"You don't have node to delete\n";
        else if(start->next==NULL)
{
    p=start;
    start=NULL;
    delete p;
}
    else
    {
        p=start;
        start=start->next;
        start->prev=NULL;
            delete p;
    }
}

void deleteend()
{
    if(start==NULL)
        cout<<"You don't have node to delete\n";

else if(start->next==NULL)
{
    p=start;
    start=NULL;
    delete p;
}

    else
    {
        p=start;
    while(p->next!=NULL)
    {
    p=p->next;
    }
    p->prev->next=NULL;
    delete p;

    }
}

void deleteanypos()
{
    int i=1,pos;

  if(start==NULL)
    cout<<"you don't have node to delete\n";
    else
        {
                cout<<"enter the position\n";
             cin>>pos;
             if(pos==1)
             {

                        if(start->next==NULL)
                            {
                                p=start;
                                start=NULL;
                                delete p;
                            }
                                else
                                {
                                    p=start;
                                    start=start->next;
                                    start->prev=NULL;
                                        delete p;
                                }
             }
             else
             {
                        p=start;
                    while(i!=pos)
                    {
                        p=p->next;
                       i++;
                    }

                     p->prev->next=p->next;
                     p->next->prev=p->prev;    //we can't chose the last position
                       delete p;
             }

    }
}
