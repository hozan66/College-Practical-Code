#include <iostream>
using namespace std;
int const z=20;
struct student
{
    string name;
    int id;
    int deg[7];
    float avr;
};
int main()
{
    student s[z];
    int i,j,n;
    cout<<"Enter number of student: ";
    cin>>n;
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Enter name of student & ID & 7 Degrees\n";
       cin>>s[i].name;
       cin>>s[i].id;
       for(j=0;j<7;j++)
        cin>>s[i].deg[j];
    }

       for(i=0;i<n;i++)
       {
           int sum=0;
           for(j=0;j<7;j++)
            sum+=s[i].deg[j];
           s[i].avr=sum/7.;
       }
       cout<<endl;
       for(i=0;i<n;i++)
       {
           cout<<"Name: "<<s[i].name<<endl;
             cout<<"ID: "<<s[i].id<<endl;
           for(j=0;j<7;j++)
            cout<<"Degree:"<<j+1<<"  "<<s[i].deg[j]<<endl;
           cout<<"Average: "<<s[i].avr<<endl;
           cout<<endl;
       }

  return 0;
}
/* you have n student and id and 7 degrees??find the average for each student??
Enter number of student: 2

Enter name of student & ID & 7 Degrees
hoz 123 90 96 96 82 82 68 90
Enter name of student & ID & 7 Degrees
ali 321 77 77 77 77 77 77 88

Name: hoz
ID: 123
Degree:1  90
Degree:2  96
Degree:3  96
Degree:4  82
Degree:5  82
Degree:6  68
Degree:7  90
Average: 86.2857

Name: ali
ID: 321
Degree:1  77
Degree:2  77
Degree:3  77
Degree:4  77
Degree:5  77
Degree:6  77
Degree:7  88
Average: 78.5714


*/
