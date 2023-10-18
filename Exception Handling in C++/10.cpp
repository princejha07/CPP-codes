/* 10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.  */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20],i,d=0,sc=0;
    cout<<"Enter a NICKNAME ";
    cin.getline(str,20);
    try
    {
        if(strlen(str)<8)
            throw "Nickname contains less than 8 characters ";
        for(i=0;str[i];i++)
        {
           if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]==' ')
           {

           }
           else
            throw "Nickname does contains digits or special character ";
        }
        cout<<"Valid Nickname "<<endl;
    }catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
