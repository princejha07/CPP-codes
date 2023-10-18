/* Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1=(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
}
*/
#include<iostream>
using namespace std;
class Invent1
{
  private:
    float x,y;
  public:
    Invent1(){x=y=0;}
    Invent1(float a,float b)
    {
        x=a;
        y=b;
    }
    float get_x()
    {
        return x;
    }
    float get_y()
    {
        return y;
    }
    operator  float()
    {
        return(x+y);
    }
    void display()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};
class Invent2
{
  private:
    float x,y;
  public:
    Invent2(){x=y=0;}
    Invent2(float a,float b)
    {
        x=a;
        y=b;
    }
    Invent2(Invent1 i)
    {
        y=i.get_x();
        x=i.get_y();
    }
    void display()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};
int main()
{
Invent1 s1=Invent1(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
s1.display();
cout<<tv<<endl;
d1.display();
return 0;
}
