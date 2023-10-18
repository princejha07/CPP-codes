/* Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.  */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20],i;
    cout<<"enter a email address "<<endl;

    cin.getline(str,20);
    try
    {
        if(strchr(str,'@')==0)
            throw '@';
        cout<<"You entered :"<<str<<endl;
    }
    catch(char s)
    {
        cout<<"email does not contain @ symbol "<<endl;
    }
    return 0;
}
