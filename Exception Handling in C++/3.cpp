/* Write a C++ program to perform arithmetic operations on two numbers and throw an
exception if the dividend is zero or does not contain an operator.  */
#include<iostream>
using namespace std;
int main()
{
    int x,y,ans;
    char opr;
    cout<<"perform arithmetic operation on 2 numbers: "<<endl;
    cout<<"................................................................"<<endl;
    try
    {
        cout<<"Enter first number: ";
        cin>>x;
        if(x==0)
            throw 0;
        cout<<"Enter an operator: ";
        cin>>opr;
        if(opr!='+' && opr!='-' && opr!='*' && opr!='/')
            throw opr;
        cout<<"Enter second number: ";
        cin>>y;
        switch(opr)
        {
           case '+':
               ans=x+y;
                break;
           case '-':
               ans=x-y;
               break;
           case '*':
               ans=x*y;
               break;
           case '/':
                if(y==0)
                    throw 0;
                ans=x/y;
        }
     cout<<"Answer is : "<<x<<" "<<opr<<" "<<y<<" = "<<ans<<endl;
    }catch(int x)
    {
        cout<<"Exception error: invalid input";
    }
    catch(const char c)
    {
        cout<<"Exception error: "<<c<<" is an invalid operator"<<endl;
    }
    return 0;
}
