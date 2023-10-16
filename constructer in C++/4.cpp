/* Define a class student and write a program to enter student details using constructor
and define member function to display all the details.  */
#include<iostream>
#include<cstring>
using namespace std;
class student
{
   private:
     int roll_no;
     char name[20];
   public:
     student(){ }
     student(int r,char s[])
     {
         roll_no=r;
         strcpy(name,s);
     }
     void display()
     {
         cout<<roll_no<<" "<<name<<endl;;
     }
};
int main()
{
    student s1(3,"prince"),s2(4,"ram");
    s1.display();
    s2.display();
    return 0;
}
