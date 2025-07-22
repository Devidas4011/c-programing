#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the 2 no;:");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n%d",a);
    printf("\n%d",b);
    return 0;
}