/* 10. Create a Distance class having 2 instance variable feet and inches. Also create
default constructor and parameterized constructor takes 2 variables . Now overload ()
function call operator that takes 3 arguments a , b and c and set feet = a + c + 5 and
inches = a+b + 15.   */
#include<iostream>
using namespace std;
class Distance
{
   private:
      int feet ,inches;
   public:
      Distance(){feet=inches=0;}
      Distance(int a,int b){feet=a; inches=b; }
      void show_data()
      {
          cout<<"feet="<<feet<<" inches="<<inches<<endl;
      }
      Distance operator()(int a,int b,int c)
      {
          Distance temp;
          temp.feet=a+c+5;
          temp.inches=a+b+15;
          return temp;
      }
};
int main()
{
    Distance d1(2,4),d2(5,7),d3;
    d3=d1(10,20,30);
    d3.show_data();
    return 0;

}
