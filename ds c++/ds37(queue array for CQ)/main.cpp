#include <iostream>
using namespace std;

int const siz=5;
int Front=-1,Back=-1,q[siz];
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
    int item;

    if((Back+1)%siz==Front)
        cout<<"Queue is Full\n";
    else
    {
            cout<<"Enter New item: ";
            cin>>item;
                  if(Back==-1)
            {
                Front++;
                Back++;
                q[Back]=item;
            }
            else
                {
                    Back=(Back+1)%siz;
                    q[Back]=item;
                }
    }

}

void Dequeue()
{
    if(Back==-1)
        cout<<"Queue is Empty\n";
    else if(Front==Back)
    {
        Front=-1;
        Back=-1;
    }
    else
     Front=(Front+1)%siz;
}

void print()
{
    if(Back==-1)
        cout<<"Queue is Empty\n";
        else
        {
            for(int i=Front;i!=Back;i=(i+1)%siz)
                cout<<q[i]<<endl;
            cout<<q[Back]<<endl;
        }
}
