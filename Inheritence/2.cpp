/* Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class. */
#include<iostream>
#include<cstring>
using namespace std;
class A
{
   protected:
     int a,b;
   public:
     void accept()
     {
         cout<<"enter 1st number ";
         cin>>a;
         cout<<"enter 2nd number ";
         cin>>b;
     }
};
class B: public A
{
   private:
    int s;
   public:
     void sum()
     {
         s=a+b;
     }
     int get_sum()
     {
         return s;
     }
};
int main()
{
    B obj;
    obj.accept();
    obj.sum();
    cout<<"sum is "<<obj.get_sum();
    return 0;
}
