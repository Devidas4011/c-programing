#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    printf("\nprevious character:%c",(ch-1));
    printf("\nNext character:%c",(ch+1));
    return 0;
}