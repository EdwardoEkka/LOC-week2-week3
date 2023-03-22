//Write a C program to copy the elements of one array into another array.
#include<stdio.h>
int main()
{
    int a[10]={3,4,5,6,7,3,2,3,4,56};
    int b[10],i;
    for(i=0;i<10;i++){
        b[i]=a[i];
    }
    printf("The elements of first array:");
    for(i=0;i<10;i++)
    {
        printf("%d,",a[i]);
    }
     printf("\nThe elements of second array:");
    for(i=0;i<10;i++)
    {
        printf("%d,",b[i]);
    }
}