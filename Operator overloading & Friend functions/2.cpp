/*
Write a C++ program to overload unary operators that is increment and decrement.
*/
#include<iostream>
using namespace std;
class complex
{
    private:
        int a,b;
    public:
        void setData(int x,int y){ a=x; b=y;}
        void showData()
        {
            cout<<a<<" + "<<b<<" i "<<endl;
        }
        complex operator++()
        {   complex temp;
            temp.a=++a;
            temp.b=++b;
            return temp;
        }
        complex operator--()
        {
            complex temp;
            temp.a=--a;
            temp.b=--b;
            return temp;
        }
         complex operator++(int)
        {   complex temp;
            temp.a=a++;
            temp.b=b++;
            return temp;
        }
        complex operator--(int)
        {
            complex temp;
            temp.a=a--;
            temp.b=b--;
            return temp;
        }

};
int main()
{
    complex c1,c2,c3,c4,c5,c6;
    c1.setData(2,3);
    c2.setData(4,5);
    c3=--c1;
    c1.showData();
    c3.showData();
    c4=c2--;
    c2.showData();
    c4.showData();
    return 0;
}
