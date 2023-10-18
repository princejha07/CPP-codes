/* Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits. */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char num[20],i;
    cout<<"enter a mobile number ";
    cin.getline(num,20);
    try
    {
        if(strlen(num)!=10)
            throw "not contains 10 digit";
        for(i=0;num[i];i++)
        {
            if(num[i]<'0' || num[i]>'9')
                throw "does not contains valid digit";
        }
        cout<<"Valid mobile number ";
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
