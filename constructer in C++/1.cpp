// Define a class Cube and calculate Volume of Cube and initialize it using constructor.
#include<iostream>
using namespace std;
class Cube
{
   private:
     int side,volume;
   public:
     Cube()  // default constructor
     {
         side=0;
     }
     Cube(int x)  // parameterized constructor
     {
         side=x;
     }
     Cube(Cube &c)  // copy constructor
     {
         side=c.side;
     }
     int get_side()
     {
         return side;
     }
     int get_vol()
     {
         return volume;
     }
     void calulateVolume()
     {
         volume=(side*side*side);
     }
};
int main()
{
    Cube c1(5);
    Cube c2=c1;
    c1.calulateVolume();
    c2.calulateVolume();
    cout<<"volume of cube having side "<<c1.get_side()<<" is "<<c1.get_vol()<<endl;
    cout<<"volume of cube having side "<<c2.get_side()<<" is "<<c2.get_vol();
    return 0;
}
