/* Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}
*/
#include<iostream>
using namespace std;
class Product
{
  private:
    int x,y;
  public:
    Product(){x=y=0;}
    Product(int a,int b)
    {
        x=a;
        y=b;
    }
    void setData(int a,int b)
    {
        x=a;
        y=b;
    }
    int get_x()
    {
        return x;
    }
    int get_y()
    {
        return y;
    }
    void display()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }

};
class Item
{
   private:
     int x,y;
   public:
    Item(){x=y=0;}
    Item(int a,int b)
    {
        x=a;
        y=b;
    }
    Item(Product p)
    {
        x=p.get_x();
        y=p.get_y();
    }
    void display()
    {
        cout<<"x="<<x<<" y="<<y<<endl;
    }
};

int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
i1.display();
return 0;
}
