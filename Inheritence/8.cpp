/* - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.  */
#include<iostream>
#include<cstring>
using namespace std;
class customer
{
   protected:
     char name[20];
     char phone[15];
   public:
     void acceptC()
     {
         cout<<"Enter customer name         : ";
         cin>>name;
         cout<<endl;
         cout<<"Enter customer phone number : ";
         cin>>phone;
         cout<<endl;
     }
};
class Depositer : public customer
{
   protected:
    int acc_no,bal;
   public:
    void acceptD()
    {
         cout<<"Enter customer A/C number    : ";
         cin>>acc_no;
         cout<<endl;
         cout<<"Enter balance                : ";
         cin>>bal;
         cout<<endl;
    }

};
class Borrower : public Depositer
{
   protected:
     int loan_no,loan_amt;
   public:
     void acceptB()
     {
         cout<<"Enter loan number            : ";
         cin>>loan_no;
         cout<<endl;
         cout<<"Enter loan amount            : ";
         cin>>loan_amt;
         cout<<endl<<"......................................................."<<endl;
     }
      void show_data()
      {
        cout<<endl;
        cout<<"Details of customer "<<endl<<"................................................."<<endl;
        cout<<"Customer Name             :"<<name<<endl;
        cout<<"Customer Phone number     :"<<phone<<endl;
        cout<<"Customer account number   :"<<acc_no<<endl;
        cout<<"Customer account balance  :"<<bal<<endl;
        cout<<"Customer Loan number      :"<<loan_no<<endl;
        cout<<"Customer Loan amount      :"<<loan_amt<<endl;
        cout<<endl<<"........................................................."<<endl;
      }

};
int main()
{
    Borrower *p;
    int x,i;
    cout<<"Enter number of customer detail you want :";
    cin>>x;
    cout<<endl;
    p=new Borrower[x];
    for(i=0;i<x;i++)
    {
        p[i].acceptC();
        p[i].acceptD();
        p[i].acceptB();
    }
    for(i=0;i<x;i++)
        {
            p[i].show_data();
        }
    return 0;
}
