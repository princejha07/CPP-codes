/* Define a class Rectangle and define an instance member function to find the area of
the rectangle.  */
#include<iostream>
using namespace std;
class Rectangle
{
   private:
     int l,b,ar;
   public:
      void set_value(int len,int bre)
      {
          l=len;
          b=bre;
      }
      int get_length()
      {
          return l;
      }
      int get_breadth()
      {
          return b;
      }
      int get_area()
      {
          return ar;
      }
      void area()
      {
          ar=l*b;
      }
};
int main()
{
    Rectangle r;
    r.set_value(3,4);
    r.area();
    cout<<"area of rectangle having length "<<r.get_length()<<" and breadth "<<r.get_breadth()<<" is "<<r.get_area();
    return 0;
    }
