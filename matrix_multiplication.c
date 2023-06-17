#include<stdio.h>
#include<windows.h>
#include<conio.h>
void main()
{
    int row1,col1,row2,col2,i,j,m,k;
    printf("Enter the number of rows and columns of first matrix\n");
    printf("row1: ");
    scanf("%d",&row1);
    printf("column1: ");
    scanf("%d",&col1);
    printf("Enter the number of rows and columns of second matrix\n");
    printf("row2: ");
    scanf("%d",&row2);
    printf("column2: ");
    scanf("%d",&col2);
    int a[row1][col1],b[row2][col2],mulmat[row1][col2];
    if(col1==row2)
    {
        for(m=1;m<=2;m++)
        {
            printf("\nEnter Matrix %d elements\n",m);
            for(i=0;i<row1&&m==1||i<row2&&m==2;i++)
            {
                for(j=0;(j<col1&&m==1)||(j<col2&&m==2);j++)
                {
                    if(m==1)
                    scanf("%d",&a[i][j]);
                    else
                    scanf("%d",&b[i][j]);
                }
            }
        }
        printf("\nProduct of 2 matrices\n\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                mulmat[i][j]=0;
                for(k=0;k<col1;k++)
                mulmat[i][j]+= a[i][k]*b[k][j];
                printf("%d ",mulmat[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Matrix Multiplication is not possible");
    getch();
    system("cls");
}