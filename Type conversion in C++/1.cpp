/* Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
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
    complex(int x)
    {
        a=x;
        b=x;
    }
    void operator=(int t)
    {
        a=t;
        b=t+10;
    }
    void display()
    {
        cout<<"a="<<a<<" b="<<b<<endl;
    }
};
int main()
{
    int x=5;
    complex c1;
    c1=x;
    c1.display();
    return 0;
}
