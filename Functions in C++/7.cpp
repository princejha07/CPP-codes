// Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
inline int sum(int,int,int=0);
int main()
{
    int a,b,c;
    cout<<"enter two numbers ";
    cin>>a>>b;
    cout<<"sum of "<<a<<" and "<<b<<" is "<<sum(a,b);
    cout<<endl;
    cout<<"enter 3 numbers ";
    cin>>a>>b>>c;
    cout<<"sum of "<<a<<","<<b<<" and "<<c<<" is "<<sum(a,b,c);
    return 0;
}
int sum(int a,int b,int c)
{
    return (a+b+c);
}
