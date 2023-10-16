/*
10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
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
    Matrix operator+(Matrix m)
    {
        Matrix temp;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                temp.a[i][j]=a[i][j]+m.a[i][j];
            }
        }
        return temp;
    }
};
int main()
{
    Matrix m1,m2,m3;
    m1.showData();
    cout<<"Enter Matrix Element(3*3) "<<endl;
    m1.setData();
    cout<<"Matrix is "<<endl;;
    m1.showData();
    cout<<"Enter Matrix Element(3*3) "<<endl;
    m2.setData();
    cout<<"Matrix is "<<endl;
    m2.showData();
    m3=m1+m2;
    cout<<"addition of matrix :"<<endl;
    m3.showData();
    return 0;
}

