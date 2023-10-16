/* Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class. */
#include<iostream>
using namespace std;
class LargestNumbers
{
   private:
     int a,b,c;
   public:
     void set_value(int x,int y,int z)
     {
         a=x; b=y; c=z;
     }
     int getA()
     {
         return a;
     }
     int getB()
     {
         return b;
     }
     int getC()
     {
         return c;
     }
     int Largest()
     {
         if(a>b)
         {
             if(a>c)
                return a;
             else
                return c;
         }
         else
         {
             if(b>c)
                return b;
             else
                return c;
         }
     }
};
int main()
{
    LargestNumbers L;
    L.set_value(5,8,2);
    cout<<"largest number between "<<L.getA()<<","<<L.getB()<<" and "<<L.getC()<<" is "<<L.Largest();
    return 0;
}
