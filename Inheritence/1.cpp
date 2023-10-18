/* Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.  */
#include<iostream>
#include<cstring>
using namespace std;
class Person
{
  private:
    int age;
    char name[20];
  public:
    void set_name(char *n)
    {
        strcpy(name,n);
    }
    void set_age(int a)
    {
        age=a;
    }
    char* get_name()
    {
        return name;
    }
    int get_age()
    {
        return age;
    }
};
class Employee:public Person
{
  private:
    int empID;
    float salary;
  public:
    void set_empID(int x)
    {
        empID=x;
    }
    void set_salary(float x)
    {
        salary=x;
    }
    int get_empID()
    {
        return empID;
    }
    float get_salary()
    {
        return salary;
    }
    void display()
    {
        cout<<"Name "<<get_name()<<" Age "<<get_age()<<endl;
        cout<<"Employee ID "<<get_empID()<<" Salary "<<get_salary()<<endl;
    }
};
int main()
{
    Employee e1;
    e1.set_name("Prince");
    e1.set_age(23);
    e1.set_empID(88);
    e1.set_salary(45000.0f);
    e1.display();
    return 0;
}
