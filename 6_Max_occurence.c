//Write a program to find the maximum occuring integer in an array.
#include<stdio.h>
int main()
{
    int a[10]={3,3,4,5,32,3,2,3,4,5};
    int maxCount=0,count=0,maxElement;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(a[i]==a[j])
            {
                count=count+1;
            }
        }
        if(count>maxCount)
        {
            maxCount=count;
            maxElement=a[i];
        }
        count=0;
    }
    if(maxCount<=1)
    {
         printf("No repeating elements.\n");
    }
    else
    {
        printf("Maximum occuring element is %d.",maxElement);
    }
    

}