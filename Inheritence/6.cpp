/* Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method). */
#include<iostream>
using namespace std;
class B;
class A
{
   private:
     int a;
   public:
     A(int b){a=b;}
     void show_a()
     {
         cout<<"a="<<a<<endl;
     }
     friend void fun_swap(A&,B&);
};
class B
{
   private:
      int x;
   public:
      B(int y){x=y;}
      void show_x()
      {
          cout<<"x="<<x<<endl;
      }
      friend void fun_swap(A&,B&);
};
void fun_swap(A &X,B &Y)
{
    int t;
    t=X.a;
    X.a=Y.x;
    Y.x=t;
}
int main()
{
    A obj1=4;
    B obj2=5;
    fun_swap(obj1,obj2);
    obj1.show_a();
    obj2.show_x();
    return 0;
}
