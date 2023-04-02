#include<stdio.h>
#include<string.h>

int main()
{
    char str[100],ch;
    int i,len,j;
    printf("Please enter any string:");
    gets(str);
    printf("Please enter the character you want to remove.");
    scanf("%c",&ch);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]==ch)
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
            i--;
        }
    }
    printf("The final string is:%s",str);
}