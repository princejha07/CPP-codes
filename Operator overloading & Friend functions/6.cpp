/*
Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Cstring
{
   private:
       char name[20];
   public:
     void setString(char s[])
     {
          strcpy(name,s);
     }
     void showData()
     {
         cout<<name;
     }
     Cstring operator+(Cstring s)
     {
          Cstring c;
          strcpy(c.name,name);
          strcat(c.name,s.name);
          return c;
     }
     int operator==(Cstring c)
     {
         if(strcmp(name,c.name)==0)
            return 1;
         return 0;
     }
};
int main()
{
    Cstring First_name,Last_name,Full_name;
    First_name.setString("prince");
    Last_name.setString("prince");
    Full_name=First_name+Last_name;
    Full_name.showData();
    if(First_name==Last_name)
        cout<<endl<<"first and last name are same"<<endl;
    else
        cout<<endl<<"first and last name are not same"<<endl;
    return 0;
}
