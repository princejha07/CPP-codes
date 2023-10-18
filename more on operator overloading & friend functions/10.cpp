// overload greater than operator (>)
#include<iostream>
using namespace std;
class time
{
   private:
    int hour,min;
   public:
    time(){}
    time(int a,int b)
    {
        hour=a;
        min=b;
    }
    void display()
    {
        cout<<hour<<" hours "<<min<<" minutes"<<endl;
    }
    bool operator>(time t)
    {
        if(hour>t.hour)
            return true;
        else
        {
            if(hour==t.hour)
            {
                if(min>t.min)
                    return true;
            }
            return false;
        }

    }
};
int main()
{
    time t1(3,45),t2(10,41);
    if(t1>t2)
        cout<<"hello";
    else
        cout<<"hii";
    return 0;

}
