#include <iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
int main()
{
    date d;
    int days;
    cout<<"Enter the date(d/m/y) \n";
    cin>>d.day>>d.month>>d.year;
    cout<<"Enter the days that you want to add to the date \n";
    cin>>days;
    if(d.day<=30&&d.day>=1&&d.month<=12&&d.month>=1&&d.year>0)
    {
        d.day+=days;
        do
        {
            if(d.day>30)
            {
               d.month++;
                 d.day-=30;
               if(d.month>12)
               {
                   d.year++;
                   d.month-=12;
               }
            }
        }while(d.day>30);
        cout<<"The new date(d/m/y): ";
        cout<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;

    }
    else
        cout<<"The date is wrong\n";

    return 0;
}
/* We have a date (input by user's option) if we add a number/days
(also by user's option) to the date this date should be increased like the ordinary date
(for example if we add 20 days to 13/01/2000 the date must change to 03/02/2000 ) by using struct
note:suppose that every month is 30 days?

Enter the date(d/m/y)
12 8 2000
Enter the days that you want to add to the date
400
The new date(d/m/y): 22/9/2001

*/
