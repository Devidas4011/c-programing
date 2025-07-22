#include<stdio.h>
int main()
{
    char ch;
   printf("Enter the character:");
   scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("Digit");
    }
  
    else if(ch>='a' && ch<='z')
    {
        printf("Small Alphabets");
    }
     
    else if(ch>='A' && ch<='Z')
    {
        printf("Upper Alphabets");
    }
    else
     printf("Special character");
    return 0;
}