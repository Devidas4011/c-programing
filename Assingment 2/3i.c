#include<stdio.h>
int main()
{
    int n;
    printf("enter the no");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("Even");
    }
    else
       printf("Odd");
    return 0;
}