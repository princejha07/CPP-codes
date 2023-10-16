// demonstrate the structure in c++
#include<iostream>
using namespace std;
struct Book
{
    private:
    int book_id;
    char title[20];
    float price;

    public:
        void display()
        {
            cout<<book_id<<" "<<title<<" "<<price;
        }
        void input()
        {
            cout<<"enter the Book_id , Title and Price of the book "<<endl;
            cin>>book_id;
            cin.ignore();
            cin.getline(title,20);
            cin>>price;
        }
};
int main()
{
    Book b1;
    b1.input();
    b1.display();
    return 0;
}
