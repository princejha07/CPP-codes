/* Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol. */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20],i,d=0,sc=0;
    cout<<"Enter a USERNAME ";
    cin.getline(str,20);
    try
    {
        if(strlen(str)<6)
            throw "USERNAME contains less than 6 characters ";
        for(i=0;str[i];i++)
        {
           if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]==' ')
           {

           }
           else
            throw "USERNAME does contains digits or special character ";
        }
        cout<<"Valid USEDNAME "<<endl;
    }catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
