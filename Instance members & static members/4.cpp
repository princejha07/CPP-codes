/* Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result. */
#include<iostream>
using namespace std;
class StaticCount
{
   private:
    static int x;
   public:
    static void fun()
    {
        x++;
    }
    static int get()
    {
        return x;
    }
};
int StaticCount::x;
int main()
{
    StaticCount::fun();
    StaticCount::fun();
    StaticCount::fun();
    cout<<StaticCount::get();
    return 0;
}
