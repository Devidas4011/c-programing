#include<stdio.h>
int main()
{
    int n;
    printf("enter the no");
    scanf("%d",&n);
    if(n>0)
    {
        if(n%7==0 && n%5==0)
        {
            printf("No is divisiable by 5 and 7");
        }
        else
         printf("No is not divisible by 5 and 7");
        }
         else
       printf("No is negative");
    return 0;
}