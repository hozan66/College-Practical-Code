/*
Create C++ program to perform operations on date and time, add some amount of days
to a specific date, find the number of days between two dates, and show the dates
between two ranges, overloading ++ to increase one month and -- to decrease one month.
*/
#include <iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;
public:
    Date(int xday,int ymonth, int zyear)
    {
        cout<<"this is parameterized constructor\n"<<endl;
       if(xday<=30&&xday>=1&&ymonth<=12&&ymonth>=1&&zyear>0)
       {
           day=xday;
           month=ymonth;
           year=zyear;
       }
        else
        cout<<"Invalid Date\n";
    }
    ~Date()
    {
        cout<<"this is Destructor\n"<<endl;
    }
    int NumOfDays()
    {
        return (day+month*30+year*365);
    }
    void AddDays(int numDays)
    {
        day+=numDays;
        do
        {
            if(day>30)
            {
               month++;
                 day-=30;
               if(month>12)
               {
                   year++;
                   month-=12;
               }
            }
        }while(day>30);
    }

    void printDate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
    friend void NewDate(Date d);
};

void NewDate(Date d)
    {
        cout<<"The new date(d/m/y): ";
        cout<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
    }

int main()
{
    int a,b,c;
    cout<<"Enter Export Date: ";
    cin>>a>>b>>c;
    Date ob1(a,b,c);

    cout<<"Enter Expiry Date: ";
    cin>>a>>b>>c;
    Date ob2(a,b,c);

  int  Days=ob2.NumOfDays()-ob1.NumOfDays();
  cout<<"The Export Date: ";
  ob1.printDate();
   cout<<"The Expiry Date: ";
  ob2.printDate();
  cout<<"Number of Days Between two days="<<Days<<endl<<endl;

  int numDays;
  cout<<"Enter the Number of days that you want to add to the Expiry Date: ";
  cin>>numDays;
  ob2.AddDays(numDays);
  NewDate(ob2);
    return 0;
}
/*
Enter Export Date: 5 5 2019
this is parameterized constructor

Enter Expiry Date: 5 5 2020
this is parameterized constructor

The Export Date: 5/5/2019
The Expiry Date: 5/5/2020
Number of Days Between two days=365

Enter the Number of days that you want to add to the Expiry Date: 90
The new date(d/m/y): 5/8/2020
this is Destructor

this is Destructor

this is Destructor

*/
