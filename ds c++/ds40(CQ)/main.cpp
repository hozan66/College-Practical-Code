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

    if(  (Back+1==Front)||(Front==0&&Back==siz-1)  )
        cout<<"Queue is Full\n";
    else
    {
            cout<<"Enter New item: ";
            cin>>item;
        if(Back==-1)
            {
                Front++;    //check for first adding
                Back++;
                q[Back]=item;
            }
            else if(Back==siz-1)
            {
                 Back=0;
                q[Back]=item;
            }
            else
                {
                    Back++;
                    q[Back]=item;
                }
    }

}

void Dequeue()
{
    if(Front==-1)
        cout<<"Queue is Empty\n";
    else if(Front==Back)
    {
        Front=-1;   //return to  initial
        Back=-1;
    }
    else if(Front==siz-1)
        Front=0;
    else
        Front++;
}

void print()
{
    if(Front==-1)
        cout<<"Queue is Empty\n";
        else
        {
            if(Front<=Back)
            {
                for(int i=Front;i<=Back;i++)
                    cout<<q[i]<<endl;
            }
            else
            {
               for(int i=Front;i<=siz-1;i++)
                    cout<<q[i]<<endl;
                    for(int i=0;i<=Back;i++)
                    cout<<q[i]<<endl;
            }
        }
}
