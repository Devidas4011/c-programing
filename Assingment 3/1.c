#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no:");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
           printf("one");
             break;
        case 2:
           printf("two");
             break;
        case 3:
           printf("Three");
             break;
        case 4:
           printf("four");
             break;
        case 5:
           printf("five");
             break;
        case 6:
           printf("six");
             break;
        case 7:
           printf("seven");
             break;
        case 8:
            printf("Eight");
             break;
        case 9:
             printf("nine");
             break;
        case 10:
            printf("Ten");
             break;
        default:
        printf("Invalid choice");
    }
    return 0;
}