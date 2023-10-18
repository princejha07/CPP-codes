/* Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator  */
#include<iostream>
using namespace std;
class complex
{
   private:
    int a,b;
   public:
    complex(){a=b=0;}
    friend istream& operator>>(istream &,complex &);
    friend ostream& operator<<(ostream &,complex);
};
istream& operator>>(istream &din,complex &c)
{
    cout<<"enter real part ";
    din>>c.a;
    cout<<"enter imaginary part ";
    din>>c.b;
    return din;
}
ostream& operator<<(ostream &dout,complex c)
{
    dout<<"real="<<c.a<<" imag="<<c.b<<endl;
    return dout;
}
int main()
{
    complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}
