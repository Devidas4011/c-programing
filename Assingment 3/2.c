#include<stdio.h>
int main()
{
    int a,b,op;
    printf("Enter the expression:");
    scanf("%d%c%d",&a,&op,&b);
    switch(op)
    {
        case '+':
            printf("\n%d %c %d is:%d",a,op,b,(a+b));
             break;
        case '-':
            printf("\n%d %c %d is:%d",a,op,b,(a-b));
             break;
        case '*':
            printf("\n%d %c %d is:%d",a,op,b,(a*b));
             break;
        case '/':
            printf("\n%d %c %d is:%d",a,op,b,(a/b));
             break;
        default:
        printf("Invalid choice");
    }
    return 0;
}