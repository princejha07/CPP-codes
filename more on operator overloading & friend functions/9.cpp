/* Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function.  */
#include<iostream>
using namespace std;
class Marks
{
  private:
    int mark;
  public:
    Marks(){mark=0;}
    void set_data(int a)
    {
        mark=a;
    }
    void display()
    {
        cout<<"Marks="<<mark<<endl;
    }
    Marks* operator->()
    {
       return this;
    }
};
int main()
{
    Marks m1;
    m1->set_data(3);
    m1->display();
    return 0;
}
