//Write a program to move all the negative elements to one side of an array.
#include <stdio.h>
#define ARRAY_SIZE(a)  sizeof(a)/sizeof(a[0])
void swap(int *s1, int *s2)
{
    int temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
void segregateElements(int a[], int n)
{
    int i =0,j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            if (i != j)
            {
                swap(&a[i],&a[j]);
            }
            j++;
        }
    }
}

int main()
{
    int a[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
    int l = ARRAY_SIZE(a);
    int i = 0;
    segregateElements(a, l);
    for (i = 0; i < l; i++)
    {
        printf("%d ",a[i]);
    }
}