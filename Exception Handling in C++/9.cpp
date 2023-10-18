/* Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com.  */
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[20],s[10]={"gmail.com"},i,j,l,k,count;
    cout<<"enter a email address "<<endl;
    cin.getline(str,20);
    l=strlen(s);
    try
    {
        if(strchr(str,'@')==0)
            throw '@';
        for(i=0;str[i];i++)
        {
            count=0;
            k=i;
            for(j=0;s[j];j++)
            {
                if(str[k]==s[j])
                {
                    k++;
                    count++;
                }
            }
          if(count==l)
            break;
        }
        if(count!=l)
            throw "Gmail does not contains gmail.com";
        cout<<"You entered :"<<str<<endl;
    }
    catch(char s)
    {
        cout<<"email does not contain @ symbol "<<endl;
    }
    catch(const char *msg)
    {
        cout<<msg<<endl;
    }
    return 0;
}
