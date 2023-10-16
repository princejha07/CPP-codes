/* Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called. */
#include<iostream>
using namespace std;
class Square;
class Square
{
   private:
     int n,s;
     static int c;
   public:
    void set_n(int x)
    {
        n=x;
    }
    int get_n()
    {
        return n;
    }
    int get_square()
    {
        return s;
    }
    int get_count()
    {
        return c;
    }
    void square()
    {
        s=n*n;
        c++;
    }

};
int Square::c=0;
int main()
{
    Square s1;
    s1.set_n(5);
    s1.square();
    cout<<"square of "<<s1.get_n()<<" is "<<s1.get_square();
    cout<<endl;
    cout<<"function called "<<s1.get_count()<<" times";
    return 0;
}
