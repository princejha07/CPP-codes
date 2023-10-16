/* Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.  */

#include<iostream>
#include<cstring>
using namespace std;
class Bill
{
   private:
      int unit;
      char name[20];
   public:
      void set_info(int u,char s[])
      {
          unit=u;
          strcpy(name,s);
      }
      void get_info()
      {
          cout<<name<<" has "<<unit<<" units "<<endl;
      }
      float calculate_Bill()
      {
          float amt=0.0f;
          if(unit<0)
          {
              printf("invalid unit:");
              return amt;
          }
          if(unit<=100)
          {
              amt=(unit*1.20);
          }
          else if(unit<=200)
          {
              amt=(120+(unit-100)*2);
          }
          else if(unit>200)
          {
              amt=(320+(unit-200)*3);
          }
          return amt;
      }
};
int main()
{
    Bill b1;
    b1.set_info(150,"prince");
    b1.get_info();
    cout<<"amount to be paid is "<<b1.calculate_Bill();

    return 0;

}
