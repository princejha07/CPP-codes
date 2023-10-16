/* Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number */
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
};
int main()
{
    complex c1;
    c1.set_value(3,4);
    c1.print_value();
    return 0;

}
