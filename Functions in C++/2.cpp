// Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int Highest_digit(int x)
{
    int max,r,n;
    max=x%10;
    while(x!=0)
    {
        r=x%10;
        if(r>max)
            max=r;
        x=x/10;
    }
    return max;
}
int main()
{
    int x,h;
    cout<<"enter a number ";
    cin>>x;
    h=Highest_digit(x);
    cout<<h<<" is the highest digit number ";
    return 0;
}
