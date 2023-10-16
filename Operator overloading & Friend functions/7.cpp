/*
Define a C++ class fraction
class fraction
{
int numerator;
int denominator;
Public:
fraction (int n=0, int d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
*/
#include<iostream>
using namespace std;
class Fraction
{
   private:
       int nume,deno;
   public:
       Fraction()
       {
           nume=0;
           deno=0;
       }
      void showData()
      {
          cout<<nume<<"/"<<deno;
      }
      Fraction operator++()
      {
          Fraction f;
          f.nume=++nume;
          f.deno=++deno;
          return f;
      }
      Fraction operator++(int)
      {
          Fraction f;
          f.nume=nume++;
          f.deno=deno++;
          return f;
      }

    friend istream& operator>>(istream& ,Fraction&);
    friend ostream& operator<<(ostream&,Fraction);
};
istream& operator>>(istream &din,Fraction &f)
{
    cout<<"Numerator: ";
    din>>f.nume;
    cout<<"Denominator: ";
    din>>f.deno;
    return din;
}
ostream& operator<<(ostream &dout,Fraction f)
{
    dout<<f.nume;
    cout<<"/";
    dout<<f.deno;
    cout<<endl;
    return dout;
}
int main()
{
    Fraction f1,f2;
    cout<<f1;
    cout<<f2;
    cout<<"enter 1st fraction value"<<endl;
    cin>>f1;
    f1++;
    cout<<f1;
    ++f1;
    cout<<f1;
    cout<<endl;
    cout<<"enter 2nd fraction values"<<endl;
    cin>>f2;
    f2=++f1;
    cout<<f2;
    f2=f1++;
    cout<<f2;
    cout<<f1;
    return 0;
}
