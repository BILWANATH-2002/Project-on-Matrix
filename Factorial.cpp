#include<iostream>
using namespace std;

int factorial(int n);

 int main()
 {
     int n;

     cout<<" Have a Successful end in this Project\n\n";

     cout<<"Enter a Positive Integer to find the Factorial: ";
     cin>>n;

     cout<<" Factorial of " << n <<" = " << factorial(n);
     return 0;
 }

 int factorial(int n)
 {
     if(n>1)
        return n*factorial(n-1);
     else
        return 1;
 }
