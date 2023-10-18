// overload assignment operator.
#include<iostream>
#include<cstring>
using namespace std;
class myString
{
   private:
     char *s;
     int size;
   public:
     myString()
     {
         cout<<"default constructor called"<<endl;
         s=(char*)malloc(1);
         size=1;
     }
     myString(char *a)
     {
         cout<<"Parametarized constructor called"<<endl;
         size=strlen(a);
         s=(char*)malloc(size+1);
         strcpy(s,a);
     }
     myString(const myString &str)
     {
         cout<<"copy constructor called "<<endl;
         size=strlen(str.s);
         s=(char*)malloc(size+1);
         strcpy(s,str.s);
     }
     void change(char *str)
     {
         cout<<"change function called "<<endl;
         size=strlen(str);
         free(s);
         s=(char*)malloc(size+1);
         strcpy(s,str);
     }
     void display()
     {
         cout<<s<<endl;
     }
     myString& operator=(const myString &str)
     {
         cout<<"assignment operator called"<<endl;
         if(s==str.s)
         {
             return (*this);
         }
         free(s);
         size=strlen(str.s);
         s=(char*)malloc(size+1);
         strcpy(s,str.s);
         return (*this);
     }
};
int main()
{
    myString s1("Prince");
    myString s2 = s1;   //
    myString s3;
    myString s4("MySirG");
    myString s5;

    s3 = s1;
    s4 = s1;

    s1 = s1;

    s5 = s4 = s1;

    s1.change("Jha");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();

    return 0;
}

