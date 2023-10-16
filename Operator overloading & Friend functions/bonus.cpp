 #include<iostream>
#include<cstring>
using namespace std;
class String
{
   private:
       char *p;
       int size;
   public:
        String()
        {
            p=(char*)malloc(1);
            size=1;
        }
        String(char *c)
        {
            size=strlen(c);
            p=(char*)malloc(size+1);
            strcpy(p,c);
        }
        String(String &str)
        {
            size=strlen(str.p);
            p=(char*)malloc(size+1);
            strcpy(p,str.p);

        }
         void change(char *str)
        {
            free(p);
            size=strlen(str);
            p=(char*)malloc(size+1);
            strcpy(p,str);
        }
       String& operator=(String &str)
       {
           if(p==str.p)
            return *this;
           free(p);
           size=strlen(str.p);
           p=(char*)malloc(size+1);
           strcpy(p,str.p);
           return *this;
       }
        void showData()
        {
            cout<<"string is "<<p<<endl;
        }
};
int main()
{
    String s1("prince"),s2,s3=s1,s4;
     s4=s2=s3;
    s3.change("Jha");
    s1.showData();
    s2.showData();
    s3.showData();
    s4.showData();
    return 0;
}
