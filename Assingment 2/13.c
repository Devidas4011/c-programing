#include<stdio.h>
int main()
{
    int s,m,h;
    printf("Enter the second");
    scanf("%d",&s);
    printf("Enter the minute");
    scanf("%d",&m);
    printf("Enter the hours");
    scanf("%d",&h);
    if(s<=60 && m<=60 && h<=24)
    {
        printf("Time is valid");
    }
     else
        printf("Time is not valid");
       
}