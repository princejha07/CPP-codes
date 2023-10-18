/* Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.  */
#include<iostream>
#include<cstring>
using namespace std;
class Marks
{
  protected:
   int math,sci,sst;
  public:
   void accept()
   {
       cout<<"Enter marks out of 100"<<endl;
       cout<<"Maths ";
       cin>>math;
       cout<<"Science ";
       cin>>sci;
       cout<<"SST ";
       cin>>sst;
   }
};
class Sum : public Marks
{
   protected:
     int s;
   public:
     void sum()
     {
         s=math+sci+sst;
     }
};
class Percentage : public Sum
{
   private:
     float per;
   public:
     void percent()
     {
         per=(s/300.0)*100;
     }
     void display()
     {
         cout<<"Percentage is "<<per;
     }
};
int main()
{
    Percentage p;
    p.accept();
    p.sum();
    p.percent();
    p.display();
    return 0;
}
