#include<iostream>

using namespace std;

int factorial(int n);

void display(int n)
{
   cout<<"Factorial of "<< n <<" = " << factorial(n);
}

 int main()
 {
     int n;

     cout<<" Have a Successful end in this Project\n\n";

     cout<<"Enter a Positive Integer to find the Factorial: ";
     cin>>n;

     display(n);
     return 0;
 }

 int factorial(int n)
 {
     if(n>1)
        return n*factorial(n-1);
     else
        return 1;
 }
