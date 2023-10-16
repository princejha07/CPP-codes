/*
Write a C++ program to add two complex numbers using operator overloaded by a
friend function.
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
          a=x; b=y;
      }
      void showData()
      {
          cout<<a<<" + "<<b<<" i "<<endl;
      }
      friend complex operator+(complex,complex);

};
complex operator+(complex X,complex Y)
{
    complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.setData(2,3);
    c2.setData(4,5);
    c3=operator+(c1,c2);

    c3.showData();
    return 0;
}
