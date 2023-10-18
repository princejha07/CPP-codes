/* Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.  */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char pass[20],i,a=0,sc=0,d=0;
    cout<<"INSTRUCTIONS "<<endl;
    cout<<"* password should contain at least 6 letters"<<endl;
    cout<<"* password should contains at least one DIGIT , SPECIAL CHARACTER , CAPITAL ALPHABET and SMALL APLHABET"<<endl<<endl;
    cout<<"Enter a password ";
    cin.getline(pass,20);
    try
    {
        if(strlen(pass)<6)
            throw "password has less than 6 characters";
        for(i=0;pass[i];i++)
        {
            if(pass[i]>-'A' && pass[i]<'Z')
                a=1;
            if(pass[i]>='0' && pass[i]<='9')
                d=1;
             if((pass[i]>=32 && pass[i]<=47) || (pass[i]>=58 && pass[i]<=64)   || (pass[i]>=91 && pass[i]<=96)   ||  (pass[i]>=123   &&  pass[i]<=126))
               sc=1;
        }
        if(a==0)
            throw "password does not contains any Capital letter";
        if(d==0)
            throw "password does not contains any digit ";
        if(sc==0)
            throw "password does not contain any special character";

        cout<<"Valid Password"<<endl;
    }catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
