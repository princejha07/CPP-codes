/*  Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marksheet.
*/
#include<iostream>
#include<cstring>
using namespace std;
class student
{
   protected:
     int id;
     char name[20];
};
class student_exam : public student
{
   protected:
     int s1,s2,s3,s4,s5,s6;
   public:
     void accept()
     {
         cout<<endl;
         cout<<"ENTER DETAILS OF STUDENT    ";
         cout<<endl<<endl;
         cout<<"Enter Roll number          : ";
         cin>>id;
         cout<<endl;
         cout<<"Enter name                 : ";
         cin>>name;
         cout<<endl;
         cout<<"Enter subject 1 marks      : ";
         cin>>s1;
         cout<<endl;
         cout<<"Enter subject 2 marks      : ";
         cin>>s2;
         cout<<endl;
         cout<<"Enter subject 3 marks      : ";
         cin>>s3;
         cout<<endl;
         cout<<"Enter subject 4 marks      : ";
         cin>>s4;
         cout<<endl;
         cout<<"Enter subject 5 marks      : ";
         cin>>s5;
         cout<<endl;
         cout<<"Enter subject 6 marks      : ";
         cin>>s6;
         cout<<endl<<"..................................................."<<endl;
     }
};
class student_result : public student_exam
{
   private:
     float sum,percent;
   public:
    void cal_per()
    {
        sum=s1+s2+s3+s4+s4+s6;
        percent=sum/6.0;
    }
    void display()
    {
        cout<<endl;
        cout<<"*****************STUDENT MARKSHEET***********************"<<endl;
        cout<<endl;
        cout<<"ROLL NUMBER          : "<<id<<endl;
        cout<<"NAME                 : "<<name<<endl;
        cout<<endl;
        cout<<"Marks of subject 1   : "<<s1<<endl;
        cout<<"Marks of subject 2   : "<<s2<<endl;
        cout<<"Marks of subject 3   : "<<s3<<endl;
        cout<<"Marks of subject 4   : "<<s4<<endl;
        cout<<"Marks of subject 5   : "<<s5<<endl;
        cout<<"Marks of subject 6   : "<<s6<<endl;
        cout<<endl<<endl;
        cout<<"Total percentage :"<<percent<<endl;
        if(percent>=33.0)
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL"<<endl;
    }
};
int main()
{
    int i,n;
    cout<<"Enter number of students you want : ";
    cin>>n;
    cout<<endl<<"............................................."<<endl;
    student_result *p;
    p=new student_result[n];
    for(i=0;i<n;i++)
    {
        p[i].accept();
        p[i].cal_per();
    }
    for(i=0;i<n;i++)
    {
        p[i].display();
    }
    return 0;

}
