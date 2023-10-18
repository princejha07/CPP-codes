/* Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class.  */
#include<iostream>
using namespace std;
class Coordinate
{
   private:
      int x,y,z;
   public:
     Coordinate(){x=y=z=0;}
     void set_data(int a,int b,int c)
     {
         x=a;
         y=b;
         z=c;
     }
     void show_data()
     {
         cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
     }
     Coordinate operator,(Coordinate c)
     {
         Coordinate temp;
         temp.x=z;
         temp.y=y;
         temp.z=x;
         return temp;
     }
};
int main()
{
     Coordinate c1,c2,c3,c4;
     c1.set_data(3,5,1);
     c2.set_data(4,7,1);
     c3=(c1,c2);
     c3.show_data();
     return 0;
}
