/*
Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/
#include<iostream>
#include<cstring>
using namespace std;
class String
{
   private:
       char str[100];
   public:
       void setString(char s[])
       {
           strcpy(str,s);
       }
       void showData()
       {
           cout<<"string is "<<str;
       }
      String operator!()
      {
         int i;
         String temp;
         for(i=0;str[i];i++)
         {
             if(str[i]>='a' && str[i]<='z')
                str[i]-=32;
             else
                str[i]+=32;
         }
         strcpy(temp.str,str);
         return temp;
      }
};
int main()
{
    String s1,s2;
    s1.setString("prinCE");
    s2=!s1;
    s1.showData();
    return 0;

}
