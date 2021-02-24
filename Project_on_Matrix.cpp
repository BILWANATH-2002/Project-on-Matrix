//Project ON Matrix
#include<stdio.h>
#define MAX 10
void read_matrix(int arr[MAX][MAX],int, int);
void display_matrix(int arr[MAX][MAX],int,int);

int main()
{
    int m,n,i,j;
    int arr[10][10];

    printf("Welcome to the Project!!\n\n");


    read_matrix(arr[10][10],m,n);
    display_matrix(arr[10][10],m,n);

    printf("Successfully completed the Project\n\nHope your future projects also yield the same.")


}

void read_matrix(int arr[10][10],int m,int n)
{
    int i,j;
    printf("Enter the row size\n");
    scanf("%d", &m);

    printf("Enter the column size\n");
    scanf("%d", &n);

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the the Element row wise\n");
            scanf("%d", &arr[i][j]);
        }
    }
}


void display_matrix(int arr[10][10],int m,int n)
{
    int i,j;
    printf("The read matrix is\n");

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("The Elements are \t%d\t",arr[i][j]);
        }
     }
}
