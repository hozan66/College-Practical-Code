#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *start=NULL,*p,*k;

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
    cout<<"how many nodes do you have \n";
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
    }while(ch!=0);

       return 0;
}

    void print()
{
    if (start==NULL)
        cout<<"l.l is empty \n";
      else{
    for(node *i=start;i!=NULL;i=i->link)
        cout<<i->data<<endl;
        cout<<endl;}
}

void add_at_beginning()
{
  cout<<"Enter a new node\n";
   p=new node;
    cin>>p->data;
    p->link=NULL;
    if(start==NULL)
        start=p;
    else
        {
        p->link=start;
        start=p;
        }
}

void add_at_end()
{
   cout<<"Enter a new node\n";
   k=new node;
    cin>>k->data;
    k->link=NULL;
    if(start==NULL)
        start=k;
    else
        {
            p=start;
          while(p->link!=NULL)
           p=p->link;

           p->link=k;
        }
}

void add_at_anypos()
{
    int i,pos;
    i=1;

    cout<<"Enter a new node\n";
   k=new node;
    cin>>k->data;
    k->link=NULL;

     if(start==NULL)
        start=p;

        else
            {
                cout<<"input number of position\n";
                         cin>>pos;
                if(pos==1)
                        {
                            k->link=start;
                            start=k;

                        }
                                        else
                                        {
                                            p=start;
                                            while(i!=pos-1)
                                            {
                                                p=p->link;
                                                i++;
                                            }
                                            k->link=p->link;
                                            p->link=k;
                                        }
            }

}

void delete_at_beginning()
{
    if(start==NULL)
        cout<<"you don't have node to delete\n";
    else
        {
            p=start;
            start=start->link;
            delete p;
        }
}

void delete_at_end()
{
    if(start==NULL)
        cout<<"you don't have node to delete\n";
    else if(start->link==NULL)
    {
        p=start;
        start=NULL;  //start=start->link;
            delete p;
    }
    else
        {
                  p=start;
            while(p->link!=NULL)
            {
                k=p;
                p=p->link;
            }
            k->link=NULL;
            delete p;
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
                    p=start;
                    start=start->link;
                    delete p;
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

