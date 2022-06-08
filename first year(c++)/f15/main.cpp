#include <iostream>
using namespace std;
int total=0;
int main()
{
    int num[10]={3,-9,7,20,-18,3,0,43,-1,-3};
    for(int i=0;i<10;i++)
  {
      if(num[i]>=0)
        total=total+num[i]*2;
  }
    cout<<"total="<<total<<endl;
    return 0;
}/*output is
total=152
*/
