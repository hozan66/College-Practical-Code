#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *start=NULL,*p,*last,*k;

void print();
void add_at_beginning();
void add_at_end();
void add_at_anypos();
void delete_at_beginning();
void delete_at_end();
void delete_at_anypos();

int main()
{
    int n,i;
    cout<<"how many nodes do you have & enter your nodes\n";
    cin>>n;
    for(i=1;i<=n;i++)
   {
    p=new node;
    cin>>p->data;
    p->link=NULL;

     if(start==NULL)
     {
         start=p;
         last=p;
         last->link=start;
     }
     else
     {
         last->link=p;
         last=p;
         last->link=start;
     }
    }

    int ch;
    do
    {
         cout<<"press 0 for exit\n";
         cout<<"press 1 for printing\n";
         cout<<"press 2 for adding a node at beginning\n";
         cout<<"press 3 for adding a node at end\n";
         cout<<"press 4 for adding a node at any position\n";
         cout<<"press 5 for deleting a node at beginning\n";
         cout<<"press 6 for deleting a node at end\n";
         cout<<"press 7 for deleting a node at any position\n";

          cout<<"Enter your choice \n";
          cin>>ch;
          cout<<endl;
          switch(ch)
          {
                case 0: break;
                case 1: print(); break;
                case 2: add_at_beginning(); break;
                case 3: add_at_end(); break;
                case 4: add_at_anypos(); break;
                case 5: delete_at_beginning(); break;
                case 6: delete_at_end(); break;
                case 7: delete_at_anypos(); break;
                default: cout<<"Wrong choice\n";
          }
          cout<<endl;
    }while(ch!=0);

       return 0;
}

    void print()
{
    if (start==NULL)
        cout<<"C.l.l is empty \n";
      else{
            p=start;
            while(p->link!=start)
            {
                cout<<p->data<<endl;
                p=p->link;
            }
            cout<<p->data<<endl;
           }
}

void add_at_beginning()
{
  cout<<"Enter a new node\n";
   p=new node;
    cin>>p->data;
    p->link=NULL;

    if(start==NULL)
    {
      start=p;
        last=p;
        last->link=start;
    }

    else
        {
        p->link=start;
        start=p;
        last->link=start;
        }
}

void add_at_end()
{
   cout<<"Enter a new node\n";
   p=new node;
    cin>>p->data;
    p->link=NULL;

    if(start==NULL)
        {
            start=p;
            last=p;
            last->link=start;
        }
    else
        {
            last->link=p;
            last=p;
            last->link=start;
        }
}

void add_at_anypos()
{
    int i,pos;
    i=1;

    cout<<"Enter a new node\n";
   p=new node;
    cin>>p->data;
    p->link=NULL;

     if(start==NULL)
     {
           start=p;
        last=p;
        last->link=start;
     }

        else
            {
                cout<<"input number of position\n";
                         cin>>pos;
                if(pos==1)
                        {
                          p->link=start;
                          start=p;
                          last->link=start;

                        }
                                        else
                                        {
                                            k=start;
                                            while(i!=pos-1)
                                            {
                                                k=k->link;
                                                i++;
                                            }
                                            p->link=k->link;
                                            k->link=p;
                                        }
        }
}

void delete_at_beginning()
{
    if(start==NULL)
        cout<<"you don't have node to delete\n";
    else if(start==last)
    {
        p=start;
        start=last=NULL;
            delete p;
    }
    else
        {
            p=start;
            start=start->link;
            last->link=start;
            delete p;
        }
}

void delete_at_end()
{
    if(start==NULL)
        cout<<"you don't have node to delete\n";
    else if(start==last)
    {
        p=start;
        start=last=NULL;
            delete p;
    }
    else
        {
                  p=start;
            while(p->link!=last)
            {
                p=p->link;
            }
            k=last;
            delete k;
            last=p;
            last->link=start;
        }
}

void delete_at_anypos()
{
    int i,pos;
    i=1;

    if(start==NULL)
        cout<<"you don't have node to delete\n";
        else
        {
            cout<<"input number of position\n";
                      cin>>pos;
            if(pos==1)
                {
                            if(start==last)
                            {
                                p=start;
                                start=last=NULL;
                                    delete p;
                            }
                            else
                                {
                                    p=start;
                                    start=start->link;
                                    last->link=start;
                                    delete p;
                                }
                    }

                else
                    {
                        p=start;
                        while(i!=pos)
                        {
                            k=p;
                            p=p->link;
                            i++;
                        }
                        k->link=p->link;
                        delete p;
                    }
        }

}

