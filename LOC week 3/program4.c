#include<stdio.h>
int main()
{
    int i,n,*p,f=1,*fact;
    printf("Enter a number whose factorial you would like to print:");
    scanf("%d",&n);
    fact=&f;
    p=&n;
    for(i=1;i<=*p;i++)
    {
        *fact=(*fact)*i;
    }
    printf("The factorial of the number is:%d",*fact);

}