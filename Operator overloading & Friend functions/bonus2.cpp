#include<iostream>
using namespace std;
class Time
{
   private:
       int hour,min;
   public:
      Time(){ }
      Time(int h,int m)
      {
          hour=h;
          min=m;
      }
      void Display()
      {
          cout<<"Time is :"<<endl;
          cout<<"hour: "<<hour<<" Min: "<<min;
          cout<<endl;
      }
      int operator>(Time t)
      {
          if(hour>t.hour)
            return 1;
          else
          {
              if(hour==t.hour)
              {
                  if(min>t.min)
                    return 1;
              }
              return 0;
          }
      }
      /*int operator<(Time t)
      {
          if(hour<t.hour)
            return 1;
          else
          {
              if(hour==t.hour)
              {
                  if(min<t.min)
                    return 1;
              }
              return 0;
          }
      }*/
    friend int operator<(Time ,Time );

};
int operator<(Time t1,Time t2)
{
    if(t1.hour<t2.hour)
            return 1;
          else
          {
              if(t1.hour==t2.hour)
              {
                  if(t1.min<t2.min)
                    return 1;
              }
              return 0;
          }
}

int main()
{
    Time t1(2,36),t2(2,35);
    if(t1<t2)
      cout<<"hello";
    else
        cout<<"Bye";
    return 0;

}
