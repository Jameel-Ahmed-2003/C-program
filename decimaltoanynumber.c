/*

C program to convert decimal number to any other number system(binary, octal, hexadecimal)

*/
#include<stdio.h>
#include<stdlib.h>
int n,i,choice;
void anynumber(int a[n],int n,int num)
{
    for(i=0;n!=0;i++)
    {
        a[i]=n%num;
        n/=num;
    }
    for(i=i-1;i>=0;i--)
    printf("%d",a[i]);
}
void main()
{
    printf("Enter the decimal number\t");
    scanf("%d",&n);
    int a[n],n1=n,n2=n;
    printf("1.Binary Number\n2.Octal Number\n3.Hexadecimal Number\n4.Exit\n\n");
    do
    {
        printf("Enter your choice\t");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:anynumber(a,n1,2);printf("\n");break;
            case 2:anynumber(a,n2,8);printf("\n");break;
            case 3:printf("%X\n",n);break;
            case 4:exit(0);
            default:printf("Invalid choice\n");
        }
    } while (choice!=4);
}
