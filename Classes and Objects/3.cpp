/* Define a class Factorial and define an instance member function to find the Factorial
of a number using class. */
#include<iostream>
using namespace std;
class Factorial
{
    int x,fac=1;
   public:
     void set_value(int n)
     {
         x=n;
     }
     int get_n()
     {
         return x;
     }
     void calculate_fac()
     {
         int n;
         n=x;
         while(n)
         {
             fac=fac*n;
             n--;
         }
     }
     int get_fac()
     {
         return fac;
     }
};
int main()
{
    Factorial f;
    f.set_value(5);
    f.calculate_fac();
    cout<<"factorial of "<<f.get_n()<<" is "<<f.get_fac();
    return 0;
}
