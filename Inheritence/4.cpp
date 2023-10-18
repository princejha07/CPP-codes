/* Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary
output:-

How many managers you want to enter? 2
Enter Details of Manager
..............................................
Enter Employee number 101
Enter Name prince
Enter Phone 8860872098
Enter Address delhi
Enter Designation number 88
Enter department name cse
Enter salary 45000

Enter Details of Manager
..............................................
Enter Employee number 102
Enter Name ram
Enter Phone 9650216577
Enter Address jaipur
Enter Designation number 112
Enter department name cse
Enter salary 55000

ram is having maximum salary i.e 55000
  */

#include<iostream>
#include<cstring>
using namespace std;
class Person
{
   public:
     char name[20];
     char phone[15];
     char address[50];
};
class Employee : public Person
{
  public:
    int emp_no;
};
class Manager : public Employee
{
   public:
     char designation[20];
     char dep_name[20];
     float salary;
     void accept_manager()
     {
         cout<<"Enter Details of Manager ";
         cout<<endl;
         cout<<".............................................."<<endl;
         cout<<"Enter Employee number ";
         cin>>emp_no;
         cout<<"Enter Name ";
         cin>>name;
         cout<<"Enter Phone ";
         cin>>phone;
         cout<<"Enter Address ";
         cin>>address;
         cout<<"Enter Designation number ";
         cin>>designation;
         cout<<"Enter department name ";
         cin>>dep_name;
         cout<<"Enter salary ";
         cin>>salary;
         cout<<endl;
     }
};
void highest_salary(Manager m[],int size)
     {
         int i;
         Manager temp;
         temp.salary=m[0].salary;
         for(i=1;i<size;i++)
         {
             if(temp.salary<m[i].salary)
             {
                 temp.salary=m[i].salary;
                 strcpy(temp.name,m[i].name);
             }
         }
         cout<<temp.name<<" is having maximum salary i.e "<<temp.salary<<endl;
}
int main()
{
    int n,i,max_sal;
    cout<<"How many managers you want to enter? ";
    cin>>n;
    Manager m[n];
    for(i=1;i<=n;i++)
    {
        m[i].accept_manager();
    }
    highest_salary(m,5);
    return 0;
}
