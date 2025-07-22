#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("enter the character");
    scanf(" %c", &ch);
    ch = tolower(ch);
    if (ch == 'a' || ch == 'i' || ch == 'u' || ch == 'e' || ch == 'o')
    {
        printf("Vovels");
    }
    else
    
        printf("Consonant");
    return 0;
}