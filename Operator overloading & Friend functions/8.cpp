/*
Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
*/
#include<iostream>
using namespace std;
class Matrix
{
   private:
       int a[3][3];
   public:
    Matrix()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                a[i][j]=0;
            }
        }
    }
    void setData()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void showData()
    {
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    Matrix operator-()
    {
        int i,j;
        Matrix m;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                m.a[i][j]=-a[i][j];
            }
        }
        return m;
    }
};
int main()
{
    Matrix m1,m2;
    m1.showData();
    cout<<"Enter Matrix Element(3*3) "<<endl;
    m1.setData();
    cout<<"Matrix is "<<endl;;
    m1.showData();
    m2=-m1;
    cout<<"Matrix is "<<endl;
    m2.showData();
    return 0;
}
