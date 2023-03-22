//Write a program to find the total number of alphabets,digits and special characters in a string.
#include<stdio.h>
int main()
{
    char s[1000]; 
    int i,a=0,d=0,sc=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i];i++)  
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          a=a+1;
        else if(s[i]>=48 && s[i]<=57)
         d=d+1;
        else
         sc=sc+1;
 
 	}
 	
     
    printf("Alphabets = %d\n",a);
    printf("Digits = %d\n",d);
    printf("Special characters = %d", sc);
    
 
    return 0;
}