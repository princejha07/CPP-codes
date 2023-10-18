// Create a student class and overload new and delete operators outside the class.
#include<iostream>
using namespace std;
class Complex
{
   private:
     int a,b;
   public:
    Complex(){a=b=0;}
    void set_data(int x,int y)
    {
        a=x;
        b=y;
    }
    void show_data()
    {
        cout<<"real="<<a<<" imag="<<b<<endl;
    }
    Complex& operator=(const Complex &c)
    {
        a=c.a;
        b=c.b;
        return *this;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.set_data(3,4);
    c2.set_data(2,3);
    c1.show_data();
    c3=c1=c2;
    c2.show_data();
    c3.show_data();
    return 0;
}
