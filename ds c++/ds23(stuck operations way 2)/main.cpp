#include <iostream>

using namespace std;

int const siz = 25;

struct stk{

    int arr[siz];
    int top = -1;

};

stk Stack;

void push(){

    if(Stack.top == siz - 1) cout << "\nStack is full or overflown!\n\n";
    else {

        int newElement;
        cout << "\nEnter new element: ";
        cin >> newElement;
        Stack.top++;
        Stack.arr[Stack.top] = newElement;
        cout << endl;

    }

}

void pop(){

    if(Stack.top == - 1) cout << "\nStack is Empty!\n\n";
    else {

        cout << "The Deleted elements was " << Stack.arr[Stack.top] << endl << endl;
        Stack.top--;
        cout << endl;

    }

}

void print(){

    if(Stack.top == - 1) cout << "\nStack is Empty!\n\n";
    else {

        cout << "\nThe Stack contains: " << endl;

        for(int i = Stack.top; i >= 0; i--){

            cout << "\t" << Stack.arr[i] << endl;

        }

        cout << "\nThe top element is " << Stack.arr[Stack.top] << endl;

    }

}

int main(){

    int option;



    do{

        cout << "Enter 1: to print Stack\n";
        cout << "Enter 2: to push to Stack\n";
        cout << "Enter 3: to pop from Stack\n";
        cout << "Enter 0: to quit\n\n";

        cout << "\nEnter your choice: ";

        cin >> option;

        switch(option){

            case 0: break;

            case 1: print(); break;

            case 2: push(); break;

            case 3: pop(); break;

        }

    } while(option != 0);

    return 0;
}
