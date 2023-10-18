/* Write a C++ program to convert Complex type to Primitive type.
Example -
int main()
{
Complex c1;
c1.setData(3,4);
int x;
x=c1;
return 0;
}
*/
#include<iostream>
using namespace std;
class complex
{
   private:
     int a,b;
   public:
    complex(){a=b=0;}
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    operator int()
    {
        return a+b;
    }
    void display()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
int main()
{
    int x;
    complex c1(3,4);
    x=c1;
    cout<<x<<endl;
    return 0;
}

