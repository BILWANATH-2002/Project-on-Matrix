#include <iostream>
using namespace std;

void read_matrix(int array[35][35],int p,int q)	//read_matrix function is declared here//
{
int i,j;
for (i=0;i<p;i++)
{
for (j=0;j<q;j++)
{
cout<<"array["<<i<<"]["<<j<<"]: "; cin>>array[i][j];
}
}
}
void display_matrix(int array[35][35],int p,int q)	// display_matrix function is declared here //
{
int i,j; for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
cout<<" "<<array[i][j];
}
cout<<endl;
}

}
int main()
{
int p[35][35];
int r,c;
cout<<"Enter the no.of rows :";
cin>>r;
cout<<endl;
cout<<"Enter the no .of columns :";
cin>>c;
read_matrix(p,r,c);
cout<<"The Matrix is :";
cout<<endl;
display_matrix(p,r,c);
return 0;
}

