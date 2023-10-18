// Create an Integer class and overload logical not operator for that class.
#include<iostream>
using namespace std;
class Integer
{
  private:
    int i;
  public:
    Integer(){i=0;}
    Integer(int x){i=x;}
    void set_data(int x){i=x;}
    void show_data()
    {
        cout<<"Integer :"<<i<<endl;
    }
    bool operator!()
    {
        if(i==0)
            return true;
        else
            return false;
    }
};
int main()
{
    Integer i1,i2;
    i1.set_data(0);
    cout<<!i1;
    return 0;
}
