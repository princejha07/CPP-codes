/* Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables. */
#include<iostream>
using namespace std;
class complex
{
   private:
    int a,b;
   public:
    complex(){a=b=0;}
    void set_data(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    void display()
    {
        cout<<"real="<<a<<" imag="<<b<<endl;
    }
};
int main()
{
    complex c1;
    c1.set_data(3,4);
    c1.display();
    return 0;
}
