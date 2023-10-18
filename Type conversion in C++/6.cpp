/* Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class.

Example-
int main()

{
int duration;
cout<<”Enter time duration in seconds”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class time
{
  private:
    int hour,min;
  public:
    time(){hour=min=0;}
    time(int d)
    {
        hour=d/3600;
        min=d%3600;
    }
    void display()
    {
        cout<<hour<<"Hours "<<min<<" minutes "<<endl;
    }
};
int main()

{
 int duration;
 cout<<"Enter time duration in seconds"<<endl;
 cin>>duration;
 time t1 = duration;
 t1.display();
 return 0;
}
