/* Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialize all details using constructor.  */
#include<iostream>
using namespace std;
class Bank
{
  private:
      int pri,time;
      float roi,si;
  public:
      Bank()
      {
          pri=time=roi=0;
      }
      Bank(int p,float r,int t)
      {
          pri=p;
          roi=r;
          time=t;
      }
      void calculateSI()
      {
          si=(pri*roi*time)/100.0;
      }
      float get_si()
      {
          return si;
      }
      float get_roi()
      {
          return roi;
      }
      int get_time()
      {
          return time;
      }
      int get_principle()
      {
          return pri;
      }
};
int main()
{
    Bank b1(5000,0.5f,3);
    b1.calculateSI();
    cout<<"simple interest having principle "<<b1.get_principle()<<" , rate of interest "<<b1.get_roi()<<" and time "<<b1.get_time();
    cout<<" is "<<b1.get_si();
    return 0;
}
