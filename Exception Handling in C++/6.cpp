/* Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.  */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char pin[10],i;
    cout<<"enter a PIN CODE ";
    cin.getline(pin,20);
    try
    {
        if(strlen(pin)!=6)
            throw "not contains 6 digit";
        for(i=0;pin[i];i++)
        {
            if(pin[i]<'0' || pin[i]>'9')
                throw "does not contains valid digit";
        }
        cout<<"Valid PIN CODE ";
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
