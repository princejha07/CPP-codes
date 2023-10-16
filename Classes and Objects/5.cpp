/* Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class. */
#include<iostream>
using namespace std;
class ReverseNumber
{
   private:
    int n,rev;
   public:
    void set_n(int x)
    {
        n=x;
    }
    int get_rev()
    {
        return rev;
    }
    void reverse_n()
    {
        int r,x,y=0;
        x=n;
        while(x!=0)
        {
            r=x%10;
            y=y*10+r;
            x=x/10;
        }
        rev=y;
    }
};
int main()
{
    ReverseNumber r1;
    r1.set_n(345);
    r1.reverse_n();
    cout<<"reversed number is "<<r1.get_rev();
    return 0;
}
