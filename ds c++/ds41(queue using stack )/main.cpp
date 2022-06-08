#include <iostream>
using namespace std;

int const siz=5;
int s1[siz],s2[siz];
int top1=-1,top2=-1,Count=0;

void push1(int data);
int pop1();
void push2(int data);
int pop2();
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

void push1(int data)
{
        top1++;
        s1[top1]=data;
}

int pop1()
{
    return s1[top1--];
}

void push2(int data)
{
        top2++;
        s2[top2]=data;
}

int pop2()
{
    return s2[top2--];
}

void Enqueue()
{
    int item;
    if(top1==siz-1)
        cout<<"Queue is Full\n";
        else
        {
            cout<<"Enter New Item: ";
            cin>>item;
            push1(item);
            Count++;
        }

}

void Dequeue()
{
    int i,a;
    if(top1==-1)
        cout<<"Queue is Empty\n";
    else
    {
        for(i=0;i<Count;i++)
        {
            a=pop1();
            push2(a);
        }
        pop2();
        Count--;
         for(i=0;i<Count;i++)
        {
            a=pop2();
            push1(a);
        }
    }
}

void print()
{
    if(top1==-1)
        cout<<"Queue is Empty\n";
        else
        {
            for(int i=0;i<=top1;i++)
                cout<<s1[i]<<endl;
        }
}
