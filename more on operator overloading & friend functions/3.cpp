// Overload subscript operator [] that will be useful when we want to check for an index out of bound.
#include<iostream>
using namespace std;
class array
{
   private:
     int a[10]={0};
     const int size=10;
   public:
       void set_data(int num,int index)
       {
           if(index>=size || index<0)
           {
               cout<<"Index out of bound"<<endl;
               exit(0);
           }
           a[index]=num;
       }
       void get_data(int index)
       {
           if(index>=size || index<0)
           {
               cout<<"index out of bound"<<endl;
               exit(0);
           }
           cout<<a[index]<<endl;
       }
       int operator[](int);
};
int array::operator[](int i)
{
    if(i>=size || i<0)
    {
        cout<<"Index out of bound ";
        exit(0);
    }
    return (a[i]);
}
int main()
{
    array a1;
    a1.set_data(56,3);
    a1.get_data(3);
    cout<<a1[3];   //a1.operator[](3);

}
