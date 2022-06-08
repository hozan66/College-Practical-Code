#include <iostream>
using namespace std;
int main()
{
    int i,j,k;
    char  d;

    for(i=1;i<=9;i++)    // How many lines do you have
    {
        d='a';
        for(k=1;k<=5;k++) //5 How many times you want to repeat
        for(j=1;j<=16;j++)
            {
            if((i==j)||(i+j==18))
                cout<<d;
            else
            cout<<" ";
            d++;
                if(d>'z')
                d='a';
              }

              if(i==1)
                cout<<d;
            cout<<endl;
    }

    return 0;
}
/*
a               q               g               w               m               c
 b             p r             f h             v x             l n             b
  c           o   s           e   i           u   y           k   o           a
   d         n     t         d     j         t     z         j     p         z
    e       m       u       c       k       s       a       i       q       y
     f     l         v     b         l     r         b     h         r     x
      g   k           w   a           m   q           c   g           s   w
       h j             x z             n p             d f             t v
        i               y               o               e               u
*/
