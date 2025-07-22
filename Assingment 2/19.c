#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch,p,i;
    printf("Enter the letter:-");
    scanf("%c",&ch);
    ch=toupper(ch);
    printf("Uppercase :%c",ch);    
    return 0;
} 