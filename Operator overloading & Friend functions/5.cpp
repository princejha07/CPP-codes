/*
Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers.
*/
#include<iostream>
using namespace std;
class Numbers
{
   private:
       int x,y,z;
   public:
       void setData(int a,int b,int c)
       {
           x=a; y=b; z=c;
       }
       void showData()
       {
           cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
       }
       Numbers operator-()
       {
           Numbers temp;
           temp.x=-x;
           temp.y=-y;
           temp.z=-z;
           return temp;
       }
};
int main()
{
    Numbers n;
    n.setData(2,3,4);
    n=-n;
    n.showData();
    return 0;
}
