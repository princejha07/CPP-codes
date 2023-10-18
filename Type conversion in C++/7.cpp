/* Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class time
{
  private:
    int hour,min;
  public:
    time(){hour=min=0;}
    time(int h,int m)
    {
        hour=h;
        min=m;
    }
    int get_hour()
    {
        return hour;
    }
    int get_min()
    {
        return min;
    }
    void display()
    {
        cout<<hour<<"Hours "<<min<<" minutes "<<endl;
    }
};
class minute
{
  private:
    int min;
  public:
    minute(){min=0;}
    minute(time t)
    {
        min=t.get_min();
    }
    void display()
    {
        cout<<min<<" minutes "<<endl;
    }
};
int main()
{
 time t1(2,30);
 t1.display();
 minute m1;
 m1=t1; // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}
