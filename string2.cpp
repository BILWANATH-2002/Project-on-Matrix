//Operations on Strings
#include<iostream>
#include<string.h>
 using namespace std;

class S
{
    string s1,s2,s3;
public:
    void setstring()//storing the strings
    {
        cout<<"Welcome to the Program\n\n";
        cout<<"Please enter the first string: ";
        cin>>s1;
        cout<<"\nPlease enter the second string: ";
        cin>>s2;
    }

    void addstring()//Adding the strings
    {
        cout<<"\nHere we are adding the strings"<<endl;
        s3=s1+" "+s2;
        cout<<"String after adding: "<<s3<<endl;
    }

    void equatestring()//equating the strings
    {
        if(s1!=s2)
        {
            cout<<s1<<" is not equal to "<<s2<<endl;
            if(s1>s2)
                cout<<s1<<" is greater than "<<s2<<endl;
            else
                cout<<s1<<" is less than "<<s2<<endl;
        }
        else
            cout<<s1<<" is equal to "<<s2<<endl;
    }

    void displaystring()//Output of strings
    {
        cout<<"String 1 = "<<s1<<endl;
        cout<<"String 2 = "<<s2<<endl;
    }

};

main()
{
    S str;
    str.setstring();
    str.addstring();
    str.equatestring();
    str.displaystring();

    return 0;
}
