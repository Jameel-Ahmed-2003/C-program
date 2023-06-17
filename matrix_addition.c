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
    int a[row1][col1],b[row2][col2],addmat[row1][col2];
    if(row1==row2&&col1==col2)
    {
        for(m=1;m<=2;m++)
        {
            printf("\nEnter Matrix %d elements\n\n",m);
            for(i=0;i<row1;i++)
            {
                for(j=0;j<col1;j++)
                {
                    if(m==1)
                    scanf("%d",&a[i][j]);
                    else
                    scanf("%d",&b[i][j]);
                }
            }
        }
        printf("\nAddition of 2 matrices\n\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                addmat[i][j]=a[i][j]+b[i][j];
                printf("%d ",addmat[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("Matrix Addition is not possible");
    getch();
    system("cls");
}