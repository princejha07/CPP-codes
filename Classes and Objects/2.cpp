/* Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time. */
#include<iostream>
using namespace std;
class time
{
   private:
     int h,m,s;
   public:
     void set_value(int hr,int min,int sec)
     {
         while(sec>60)
         {
             sec-=60;
             min+=1;
         }
         while(min>60)
         {
             min-=60;
             hr+=1;
         }
         h=hr;
         m=min;
         s=sec;
     }
     void display()
     {
         cout<<h<<" hours "<<m<<" min "<<s<<" sec";
     }
};
int main()
{
    time t1;
    t1.set_value(34,76,74);
    t1.display();
    return 0;
}
