#include <iostream>
using namespace std;
struct lib
{
    int id;
    int quantity;
    int price;
};
int main()
{
    int n,p=0,i;
    char ch;
    cout<<"input n: ";
    cin>>n;
    lib book[n];
    cout<<"Enter book_id & book_quantity & book_price\n";
    for(i=0;i<n;i++)
    {
        cin>>book[i].id>>book[i].quantity>>book[i].price;
    }
    cout<<endl;

    do{
            cout<<"book_id & book_quantity & book_price\n";
     for(i=0;i<n;i++)
    {
        cout<<book[i].id<< " " << book[i].quantity<< " "<<book[i].price<<endl;
    }
    cout<<endl;
            int book_id, book_q;
            cout << "Enter the book ID and Quantity: ";
            cin >> book_id >> book_q;
            for(int i = 0; i < n; i++)
                {
                if(book_id == book[i].id && book_q <= book[i].quantity)
                    {
                    cout << "your order is: " << book[i].id << " " << book_q << endl;
                    cout << "The price of single book is :" << book[i].price<<endl;
                    cout << "The total price is :" << book_q * book[i].price<<endl;
                    book[i].quantity -= book_q;
                    cout << "quantity books that remain at library :" << book[i].quantity<<endl;
                    }
                else if(book_id == book[i].id && book_q > book[i].quantity)
                {
                   cout << "we don't have enough books " ;
                }
                else if(book_id != book[i].id)
                {
                    p++;
                    if(p==n)
                    cout<<"We don't have this ID\n";
                }

            }
            cout << "Do you want to continue? (N/y): ";
            cin >> ch;
            cout<<endl;
    }while(ch == 'y' || ch == 'Y');

    return 0;
}
/*
input n: 4
Enter book_id & book_quantity & book_price
123 10 5
321 10 6
213 12 3
312 20 2

book_id & book_quantity & book_price
123 10 5
321 10 6
213 12 3
312 20 2

Enter the book ID and Quantity: 432 5
We don't have this ID
Do you want to continue? (N/y): y

book_id & book_quantity & book_price
123 10 5
321 10 6
213 12 3
312 20 2

Enter the book ID and Quantity: 321 8
your order is: 321 8
The price of single book is :6
The total price is :48
quantity books that remain at library :2
Do you want to continue? (N/y): y

book_id & book_quantity & book_price
123 10 5
321 2 6
213 12 3
312 20 2

Enter the book ID and Quantity: 213 15
we don't have enough books Do you want to continue? (N/y): n

*/
