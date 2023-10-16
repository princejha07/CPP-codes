/* Define a class Date and write a program to Display Date and initialize date object
using Constructors.  */
#include<iostream>
using namespace std;
class Date
{
   private:
       int day,month,year;
   public:
       Date()
       {
           day=month=year=0;
       }
     Date(int d,int m,int y)
     {
         day=d;
         month=m;
         year=y;
     }
     void show_date()
     {
         cout<<day<<"/"<<month<<"/"<<year<<endl;
     }
};
int main()
{
    Date d1,d2(7,1,2000);
    d1.show_date();
    d2.show_date();
    return 0;
}
