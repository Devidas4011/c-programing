#include<stdio.h>
int main()
{
    int n;
    printf("enetr the no");
    scanf("%d",&n);

    if(n%5==0 || n%7==0)
    {
        printf("No is divisiable by 5 and 7");
    }
    else if(n%5!=0 || n%7!=0)
    {
        printf("No is not divisiable by 5 and 7");
    }
    return 0;
}