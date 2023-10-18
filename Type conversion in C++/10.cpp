/* Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion.

Example-
int main()

{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}
*/
#include<iostream>
using namespace std;
class rupee
{
  private:
    int x;
  public:
    rupee(){x=0;}
    rupee(int a)
    {
        x=a;
    }
    int get_rupee()
    {
        return x;
    }
    operator int()
    {
        return x;
    }
    void display()
    {
        cout<<"Rupees="<<x<<endl;
    }
};
class dollar
{
  private:
    int x;
  public:
    dollar(){x=0;}
    dollar(int a){x=a;}
    dollar(rupee r1)
    {
        x=r1.get_rupee()*100;
    }
    operator rupee()
    {
        return x/100;
    }
    void display()
    {
        cout<<"Dollar="<<x<<endl;
    }
};
int main()
{
 rupee r = 23;
 dollar d = r; // Rupee to Dollar conversion
 d.display();
 r.display();
 r = d; // Dollar to Rupee Conversion
 d.display();
 r.display();
 return 0;
}
