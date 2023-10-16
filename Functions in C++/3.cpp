// Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
int power(int x,int y)
{
    int i,p=1;
    for(i=1;i<=y;i++)
        p=p*x;
    return p;
}
int main()
{
    int x,y,p;
    cout<<"enter a number and its power ";
    cin>>x>>y;
    p=power(x,y);
    cout<<"power is "<<p;
    return 0;
}
