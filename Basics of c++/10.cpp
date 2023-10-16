// Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"enter 10 elements ";
    for(i=0;i<10;i++)
        cin>>a[i];
    for(i=0;i<10;i++)
        sum=sum+a[i];
    cout<<"sum is "<<sum;
    return 0;
}
