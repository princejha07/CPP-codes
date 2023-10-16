// Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum=0;
    float avg;
    cout<<"enter 3 numbers ";
    cin>>a>>b>>c;
    sum=a+b+c;
    avg=sum/3.0;
    cout<<"average is "<<avg;
    return 0;
}
