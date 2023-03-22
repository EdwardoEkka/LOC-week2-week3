//Write a program to find the number of vowels and consonants in a string.
#include<stdio.h>
int main()
{
    char str[100];
    int i, vowel, consonant;
    printf("Enter any string: ");
    gets(str);

    vowel = 0;
    consonant = 0;
    for(i=0;str[i]; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
                vowel=vowel+1;
            else
                consonant=consonant+1;
        }
    }

    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);
}