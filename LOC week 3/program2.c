#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,j,c=0,len;
    printf("Enter the string:");
    gets(str);
    len=strlen(str);
    printf("The frequency of each character in the string:\n");
    for(i=0;i<len;i++)
    {
        c=1;
        if(str[i])
        {
            for(j=i+1;j<len;j++)
            {
                if(str[i]==str[j])
                {
                    c++;
                    str[j]='\0';
                }
            }
            printf(" %c =%d \n",str[i],c);
        }
    }

}