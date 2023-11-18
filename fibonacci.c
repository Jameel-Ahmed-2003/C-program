/*

C program to print nterms of fibonacci series

*/
#include<stdio.h>
#include<windows.h>
int n,i=0,a=0,b=1,c;
int fibo(int i)
{
    if(i<n)
    {
        if(i==a||i==b)
        {
            if(i==a)
            printf("%d ",a);
            else if(i==b)
            printf("%d ",b);
            i++;
        }
        c=a+b;
        printf("%d ",c);
        i++;
        a=b,b=c;
        fibo(i);
    }
}
void main()
{
    system("cls");
    printf("Number of terms ");
    scanf("%d",&n);
    fibo(i);
}
