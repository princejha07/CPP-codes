/* Create a Rupee class and convert it into int. And Display it.

Example-
int main()

{
Rupee r = 10;
int x = r;
cout<<x;
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
    operator int()
    {
        return x;
    }
    void display()
    {
        cout<<"Rupees="<<x<<endl;
    }
};
int main()

{
 rupee r = 10;
 int x = r;
 cout<<x;
 return 0;
}
