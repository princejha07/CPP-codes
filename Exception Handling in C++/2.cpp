// Write a C++ program to demonstrate try, throw and catch statements.
#include<iostream>
using namespace std;
int main()
{
  try
  {
      throw 'e';
  }catch(char c)
  {
      cout<<c<<endl;
  }
  return 0;
}
