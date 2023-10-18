/* Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks. */
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    try
    {
    cout<<"Enter two numbers ";
    cin>>a>>b;
    if(b==0)
        throw "Maths nahi padhi kya";
    if(b==1)
        throw 1;
    if(b==2)
        throw exception();
    c=a/b;
    }
    catch(int e)
    {
        cout<<"Koi matlb nahi hai "<<e<<" se divide karke"<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    catch(...)
    {
        cout<<"Main to isliye chl gya kyuki programmer ko pata nahi tha kya error aayegi"<<endl;
    }

    cout<<"Result is "<<c<<endl;
    return 0;

}
