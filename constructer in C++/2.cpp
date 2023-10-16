// Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter
{
  private:
      static int count;
  public:
    Counter()
    {
        count++;
    }
    void show_count()
    {
        cout<<"count is "<<count;
    }
};
int Counter::count;
int main()
{
    Counter c1,c2,c3,c4;
    c2.show_count();
    return 0;

}
