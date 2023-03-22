//Write a program to sort a given array using function.
#include<stdio.h>
void Sorting(int a[],int n)
{
    int i,j,temp;
    //Sorting
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("/nThe sorted array in ascending order:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
}

int main()
{
    int a[]={8,3,2,1,34,9,8,2,3,48};
    int l=sizeof(a)/sizeof(a[0]);
    Sorting(a,l);   
}