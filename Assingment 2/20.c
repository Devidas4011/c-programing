#include<stdio.h>
int main()
{
    char ch;
    printf("Numbers Ascii values:-");
    for(ch='0';ch<='9';ch++)
    {
        printf(" %d",ch);
    }
    printf("\nLower letter Ascii values:-");
     for(ch='a';ch<='z';ch++)
    {
        printf(" %d",ch);
    }
     printf("\nUpeer letter Ascii values:-");
     for(ch='A';ch<='Z';ch++)
    {
        printf(" %d",ch);
    }
    return 0;
}