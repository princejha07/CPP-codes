/*  Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result. */
#include<iostream>
using namespace std;
class StaticCount
{
   private:
     static int x;
   public:
     void count()
     {
         x++;
     }
     int get()
     {
         return x;
     }
};
int StaticCount::x;
int main()
{
    StaticCount c;
    c.count();
    c.count();
    c.count();
    cout<<"total is "<<c.get();
    return 0;
}
