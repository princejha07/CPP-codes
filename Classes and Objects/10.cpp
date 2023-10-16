/* Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc. */
#include<iostream>
using namespace std;
class Area
{
  private:
     int side,length,breadth,radius;
  public:
     void set_sq_value(int x)
     {
         side=x;
     }
     void set_rec_value(int l,int b)
     {
         length=l;
         breadth=b;
     }
     void set_cir_value(int r)
     {
         radius=r;
     }
     float area_circle()
     {
         return(3.14*radius*radius);
     }
     int area_rectangle()
     {
         return length*breadth;
     }
     int area_square()
     {
         return side*side;
     }
};
int main()
{
    Area a1;
    a1.set_cir_value(2);
    a1.set_rec_value(3,4);
    a1.set_sq_value(4);
    cout<<"area of circle is "<<a1.area_circle()<<endl;
    cout<<"area of rectangle is "<<a1.area_rectangle()<<endl;
    cout<<"area of square is "<<a1.area_square();
    return 0;
}
