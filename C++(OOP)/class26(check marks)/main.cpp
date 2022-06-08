#include <iostream>
using namespace std;
class student
{
private:
    string name;
    float s1,s2;
public:
    void setdata()
    {
        cout<<"Enter name & subject1 & subject2: ";
        cin>>name>>s1>>s2;
    }
      float avr()
    {
        return (s1+s2)/2.;
    }

    void check(float s1,float s2)
    {
        if(s1>=50&&s2>=50)
            cout<<"pass\n";
        else
          cout<<"fail\n";
    }
    float markneed_s1(float s1)
    {
        if(s1<50)
            return 50-s1;
        else
            return 0;
    }
    float markneed_s2(float s2)
    {
        if(s2<50)
            return 50-s2;
        else
            return 0;
    }
      void print()
    {
        cout<<name<<"\t"<<s1<<"\t"<<s2<<"\t"<<"avr="<<avr()<<endl;
        check(s1,s2);
        cout<<"Subject1 Need: "<<markneed_s1(s1)<<" to pass"<<endl;
        cout<<"Subject2 Need: "<<markneed_s2(s2)<<" to pass"<<endl;
    }
};
int main()
{
    student x[7];
    for(int i=0;i<7;i++)
        x[i].setdata();
        cout<<endl;

    for(int i=0;i<7;i++)
    {
        x[i].print();
        cout<<endl;
    }
    return 0;
}
/*
Enter name & subject1 & subject2: hoz 50 43
Enter name & subject1 & subject2: sho 20 40
Enter name & subject1 & subject2: ho 100 0
Enter name & subject1 & subject2: ko 50 50
Enter name & subject1 & subject2: fo 70 80
Enter name & subject1 & subject2: no 80 40
Enter name & subject1 & subject2: ro 20 90

hoz     50      43      avr=46.5
fail
Subject1 Need: 0 to pass
Subject2 Need: 7 to pass

sho     20      40      avr=30
fail
Subject1 Need: 30 to pass
Subject2 Need: 10 to pass

ho      100     0       avr=50
fail
Subject1 Need: 0 to pass
Subject2 Need: 50 to pass

ko      50      50      avr=50
pass
Subject1 Need: 0 to pass
Subject2 Need: 0 to pass

fo      70      80      avr=75
pass
Subject1 Need: 0 to pass
Subject2 Need: 0 to pass

no      80      40      avr=60
fail
Subject1 Need: 0 to pass
Subject2 Need: 10 to pass

ro      20      90      avr=55
fail
Subject1 Need: 30 to pass
Subject2 Need: 0 to pass

*/
