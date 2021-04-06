#include < iostream >
using namespace std;

#include<string.h>

 class STRING
 {
 private:
     string str1,str2,str3,result;
     const char *st1="Evergreen";
     const char *st2="evergreen";

 public:
    void set_strings()//Setter Function
    {
        cout<<"Enter the string 1: ";
        getline(cin,str1);
        cout<<"Enter the string 2: ";
        getline(cin,str2);
        cout<<"Enter the string 3: ";
        getline(cin,str3);
    }

    void store_strings()
    {
        cout<<"The string 1 you Entered is "<<str1<<endl;
        cout<<"The string 2 you Entered is "<<str2<<endl;
        cout<<"The string 3 you Entered is "<<str3<<endl;
    }

    void add_strings()
    {
        result=str2+str3;
    }

    void equate_strings()//Default Constructor
    {
               int k= str1.compare(str2);
                      if(k==0)
                         cout<<"Both the strings are equal"<<endl;
                     else
                         cout<<"Both the strings are unequal"<<endl;
    }

    void get_add_strings()//Using Getter Function
    {
        cout<<"The result is "<<result<<endl;
    }

    void display_strings()
    {
        cout<<"The result of Concatenation of two strings is: "<<result<<endl;
    }

 };

 int main()
 {
     STRING s1;
     s1.set_strings();
     s1.store_strings();
     s1.add_strings();
     s1.get_add_strings();
     s1.equate_strings();
     s1.display_strings();

     return(0);
 }

