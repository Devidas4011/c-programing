#include<stdio.h>
int main()
{
    int dt,fine;
    printf("Enter the date");
    scanf("%d",&dt);
    if(dt<5)
    fine=6;
    else if(dt<10)
    fine=10;
    else if(dt>10)
    fine=15;

    printf("Fine :%d",fine);
    return 0;
}