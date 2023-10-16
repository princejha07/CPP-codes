/*
Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
*/
#include<iostream>
using namespace std;
class time
{   private:
       int Hour,min,sec;
    public:
       int operator==(time t)
       {
           if(Hour==t.Hour && min==t.min && sec==t.sec)
            return 1;
           return 0;
       }
       friend istream& operator>>(istream &,time &t);
       friend ostream& operator<<(ostream &,time t);
};
istream& operator>>(istream &din,time &T)
{
  cout<<"enter hour";
  din>>T.Hour;
  cout<<"enter min";
  din>>T.min;
  cout<<"enter sec";
  din>>T.sec;
  return din;
}
ostream& operator<<(ostream &dout,time T)
{

    dout<<"hour:"<<T.Hour<<endl;
    dout<<"min:"<<T.min<<endl;
    dout<<"sec:"<<T.sec<<endl;
    return dout;
}
int main()
{
    time t1,t2;
    cout<<"enter 1st time: "<<endl<<"......................................"<<endl;
    cin>>t1;
    cout<<endl<<"1st time is "<<endl;
    cout<<t1;
    cout<<endl;
    cout<<"enter 2nd time: "<<endl<<"......................................"<<endl;
    cin>>t2;
    cout<<endl<<"your time is "<<endl;
    cout<<t2;
    cout<<endl;
    if(t1==t2)
        cout<<"time is same";
    else
        cout<<"time is not same";
    return 0;
}
