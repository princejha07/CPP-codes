// Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
int is_fibonacci(int x)
{
    int a=-1,b=1,c,i;
    for(i=1;1;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==x)
            return 1;
        if(c>x)
            return 0;
    }
}
int main()
{
    int x;
    cout<<"enter a number ";
    cin>>x;
    if(is_fibonacci(x))
        cout<<x<<" is a term of fibonacci series";
    else
        cout<<x<<" is not a term of fibonacci series";
    return 0;
}
