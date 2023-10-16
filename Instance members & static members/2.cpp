/* Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)  */
#include<iostream>
using namespace std;
class time
{
   private:
     int h,m,s;
   public:
     void setTime(int hour,int minute,int sec)
     {
         h=hour;
         m=minute;
         s=sec;
     }
     void showTime()
     {
         cout<<h<<" hours "<<m<<" minutes "<<s<<" seconds "<<endl;
     }
     void normalize()
     {
         while(s>60)
         {
             s-=60;
             m+=1;
         }
         while(m>60)
         {
             m-=60;
             h+=1;
         }
     }
     time add(time t)
     {
         time temp;
         temp.s=s+t.s;
         temp.m=m+t.m;
         temp.h=h+t.h;
         temp.normalize();
         return temp;
     }
};
int main()
{
    time t1,t2,t3;
    t1.setTime(23,65,78);
    t2.setTime(12,78,57);
    t1.normalize();
    t2.normalize();
    t1.showTime();
    t2.showTime();
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}

