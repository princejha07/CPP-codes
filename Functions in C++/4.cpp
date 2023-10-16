// Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int comb(int x,int y);
int fact(int);
void pascal(int);
void pascal(int n)
{
   int i,j,k,r;
   for(i=1;i<=n;i++)
   {
       k=1;
       r=0;
       for(j=1;j<=n*2-1;j++)
       {
           if(j>=n+1-i && j<=n-1+i && k)
            {
                cout<<comb(i-1,r);
                r++;
                k=0;
            }
            else
            {
                cout<<" ";
                k=1;
            }

       }
       cout<<endl;
   }
}
int fact(int x)
{
    int fac=1;
    while(x)
    {
        fac=fac*x;
        x--;
    }
    return fac;
}
int comb(int x,int y)
{
    int c;
    c=(fact(x)/(fact(y)*fact(x-y)));
    return c;
}
int main()
{
    int n;
    cout<<"enter how many lines you want to print ";
    cin>>n;
    pascal(n);
    return 0;
}
