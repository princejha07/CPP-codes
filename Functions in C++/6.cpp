// Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swapping(int &x,int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
int main()
{
    int a,b;
    cout<<"enter two numbers ";
    cin>>a>>b;
    swapping(a,b);
    cout<<"swapped values are: a="<<a<<" b="<<b;
    return 0;
}
