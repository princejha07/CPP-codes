/* Define a class Circle and define an instance member function to find the area of the
circle. */
#include<iostream>
using namespace std;
class Circle
{
   private:
     int r;
     float ar;
   public:
      void set_value(int radius)
      {
          r=radius;
      }
      int get_radius()
      {
          return r;
      }
      float get_area()
      {
          return ar;
      }
      void area()
      {
          ar=3.14*r*r;
      }
};
int main()
{
    Circle c;
    c.set_value(2);
    c.area();
    cout<<"area of circle having radius "<<c.get_radius()<<" is "<<c.get_area();
    return 0;
    }

