/* Define a class Box and write a program to enter length, breadth and height and
initialize objects using constructor also define member functions to calculate volume
of the box. */
#include<iostream>
using namespace std;
class Box
{
   private:
     int l,b,h,vol;
   public:
     Box()
     {
         l=b=h=0;
     }
     Box(int x,int y,int z)
     {
         l=x;
         b=y;
         h=z;
     }
     void calcuateVolume()
     {
         vol=(l*b*h);
     }
     int getLength(){return l;}
     int getBreath(){ return b;}
     int getHeight(){ return h;}
     int getVolume(){return vol;}
};
int main()
{
    Box b1,b2(3,4,5);
    b1.calcuateVolume();
    b2.calcuateVolume();
    cout<<"volume of Box having length "<<b1.getLength()<<","<<" breath "<<b1.getBreath()<<" and height "<<b1.getHeight()<<" is "<<b1.getVolume()<<endl;
    cout<<"volume of Box having length "<<b2.getLength()<<","<<" breath "<<b2.getBreath()<<" and height "<<b2.getHeight()<<" is "<<b2.getVolume()<<endl;
    return 0;
}
