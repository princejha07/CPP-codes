/*
Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y)
        {
            a=x;  b=y;
        }
        void showData()
        {
            cout<<a<<" + "<<b<<" i "<<endl;
        }
     complex operator+(complex C)
     {
         complex temp;
         temp.a=a+C.a;
         temp.b=b+C.b;
         return temp;
     }
     complex operator-(complex C)
     {
         complex temp;
         if(C.a>a)
         {
             temp.a=C.a-a;
             temp.b=C.b-b;
         }
         else
         {
             temp.a=a-C.a;
             temp.b=b-C.b;
         }
         return temp;
     }
     complex operator*(complex C)
     {
         complex temp;
         temp.a=a*C.a;
         temp.b=b*C.b;
         return temp;
     }
     int operator==(complex C)
     {
         if(a==C.a && b==C.b)
            return 1;
         return 0;
     }
     complex operator-()
     {
         complex temp;
         temp.a=-a;
         temp.b=-b;
         return temp;
     }
};

int main()
{
    complex c1,c2,c3,c4,c5;
    c1.setData(10,4);
    c2.setData(5,2);
    c3=c1+c2;
    c3.showData();
    c3=c1-c2;
    c3.showData();
    c3=c1*c2;
    c3.showData();
    c1=-c1;
    c1.showData();
    c4.setData(2,2);
    c5.setData(2,2);
    if(c4==c3)
      cout<<"yes"<<endl;
    else
        cout<<"no"<<endl;
    return 0;
}
