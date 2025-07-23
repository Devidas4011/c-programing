#include<stdio.h>
int main()
{
    int ch;
    printf("Ente the no");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
              printf("Sunday");
              break;
    case 2:
              printf("Monday");
              break;
    case 3:
              printf("Tuesday");
              break;
    case 4:
              printf("wednesday");
              break;
    case 5:
              printf("thursday");
              break;
    case 6:
              printf("friday");
              break;
    case 7:
              printf("saturday");
              break;
    default:
        printf("invalid choice");
    }
    return 0;
}