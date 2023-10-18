/* Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.
output:-
How many items you want to purchase? 2
Enter Item name shirt
Enter Item number 101
Enter Item price 500
Enter Discount percent 20
.....................................
Enter Item name jeans
Enter Item number 102
Enter Item price 700
Enter Discount percent 25
.....................................
Item name shirt
Item number 101
Item price 500
Discount Percentage 20
Discount price 100
.........................................................
Item name jeans
Item number 102
Item price 700
Discount Percentage 25
Discount price 175
.........................................................
total price 1200
total discount 275
*/
#include<iostream>
#include<cstring>
using namespace std;
class Item
{
  protected:
    int item_no;
    char name[20];
    float price;
};
class Discounted_item : public Item
{
   public:
     float dis_percent;
     int dis_price;
     void accept()
     {
         cout<<"Enter Item name ";
         cin>>name;
         cout<<"Enter Item number ";
         cin>>item_no;
         cout<<"Enter Item price ";
         cin>>price;
         cout<<"Enter Discount percent ";
         cin>>dis_percent;
         cout<<"....................................."<<endl;
     }
     void discount()
     {
         dis_price=(dis_percent/100.0)*price;
     }
     void display()
     {
         cout<<"Item name "<<name<<endl;
         cout<<"Item number "<<item_no<<endl;
         cout<<"Item price "<<price<<endl;
         cout<<"Discount Percentage "<<dis_percent<<endl;
         cout<<"Discount price "<<dis_price<<endl;
         cout<<"........................................................."<<endl;
     }
     void total(Discounted_item d[],int size)
     {
         int i,total_price=0,total_discount=0;
         for(i=1;i<=size;i++)
         {
             total_price=total_price+d[i].price;
             total_discount=total_discount+d[i].dis_price;
         }
         cout<<"total price "<<total_price<<endl;
         cout<<"total discount "<<total_discount;
     }
};
int main()
{
    int i,n;
    cout<<"How many items you want to purchase? ";
    cin>>n;
    Discounted_item d[n];
    for(i=1;i<=n;i++)
    {
        d[i].accept();
    }
    for(i=1;i<=n;i++)
    {
        d[i].discount();
        d[i].display();
    }
    d[0].total(d,n);
    return 0;
}
