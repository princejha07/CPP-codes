// Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int l,b,h,vol;
    cout<<"enter length,width and height of cuboid ";
    cin>>l>>b>>h;
    vol=l*b*h;
    cout<<"volume of cuboid is "<<vol;
    return 0;
}
