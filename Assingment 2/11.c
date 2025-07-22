#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the no");
    scanf("%d",&a);
    printf("enter second no");
    scanf("%d",&b);

    if(a==b)
    {
        printf("Both numbers are equals");
    }
    else if(a>b)
    {
        printf("A no is greater than B ");
    }
    else if(a<b)
    {
        printf("B no is grater than a");
    }
    else
    printf("invalid");
}