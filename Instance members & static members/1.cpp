/* Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex) */
#include<iostream>
using namespace std;
class complex
{
   private:
     int x,y;
   public:
     void set_value(int a,int b)
     {
         x=a;
         y=b;
     }
     void print_value()
     {
         cout<<x<<"+"<<y<<"i";
     }
     complex add(complex C)
     {
         complex temp;
         temp.x=x+C.x;
         temp.y=y+C.y;
         return temp;
     }
};
int main()
{
    complex c1,c2,c3;
    c1.set_value(3,4);
    c2.set_value(5,2);
    c3=c1.add(c2);
    c3.print_value();
    return 0;

}
