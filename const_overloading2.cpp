// Program on Overloading
#include<iostream>
 using namespace std;

class Employee
{
public:
     employee(int s,int a,int c)
     {
         cout<<"Salary of the Employee: "<<s<<endl;
         cout<<"Age of the Employee: "<<a<<endl;
         cout<<"No: of children for the Employee: "<<c<<endl;
     }

};

class Dependent
{
    int x;
public:
    employee(int i)//constructor overloading
    {
        cout<<"Enter the value of x\n";
        cin>>x;
        cout<<"The respective Id "<<i<<" has "<<x<<" No: of dependents"<<endl;
    }
};

int main()
{
    cout<<"Welcome to the Employee's Database\n";
    Employee e1;
    cout<<"Here the details of Employee 1\n";
    e1.employee(500,20,2);
    cout<<"Here the details of Employee 2\n";
    Employee e2=e1;//copy constructor
    e2.employee(600,21,3);
    Dependent d;
    d.employee(101);

    return 0;
}

