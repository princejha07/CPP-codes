// Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int isprime(int x)
{
    int i;
    for(i=2;i<x;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int x;
    cout<<"enter a number ";
    cin>>x;
    if(isprime(x))
        cout<<x<<" is a prime number";
    else
        cout<<x<<" is not a prime number";
    return 0;
}
