//Write a program to count the number of occurences of a number in an array using function.
#include<stdio.h>
void Occurence(int a[],int l)
{
    int c=0;
    int n;
    printf("Enter the number whose occurence has to be counted:");
    scanf("%d",&n);
    for(int i=0;i<=l;i++)
    {
        if(a[i]==n)
        {
            c=c+1;
        }
    }
    if(c>0)
    {
        printf("The number of occurence of %d is:%d",n,c);
    }
    else
    {
        printf("\nThe number does not exists in the array.");
    }
    
}
int main()
{
    int a[]={3,4,5,6,4,3,2,4,66,78,43,2,7,3,3,3,4,33,9};
    int l=sizeof(a)/sizeof(a[0]);
    Occurence(a,l);
}