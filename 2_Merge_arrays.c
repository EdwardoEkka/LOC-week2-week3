//Take two array as input,merge them and print it in reverse order using loop.
#include<stdio.h>
int main()
{
    int s1,s2;
    printf("Enter the size of the first array:");
    scanf("%d",&s1);
    printf("Enter the size of the second array:");
    scanf("%d",&s2);
    int s3=s1+s2;
    int a1[s1],a2[s2],a3[s3];
    int n1,n2;
    for(int i=0;i<s1;i++){
        printf("Enter element no %d in array1=",i);
        scanf("%d",&n1);
        a1[i]=n1;
    }
    for(int j=0;j<s2;j++){
        printf("Enter element no %d in array2=",j);
        scanf("%d",&n2);
        a2[j]=n2;
    }
    int p=0;
    for(int k=0;k<s3;k++)
    {
        if(k<s1)
        {
            a3[k]=a1[k];
        }
        else
        {
            a3[k]=a2[p];
            p=p+1;
        }
    
    }
    printf("The merged array in reversed order:\n");
    for(int l=s3-1;l>=0;l--)
    {
        printf("%d\n",a3[l]);
    }


}