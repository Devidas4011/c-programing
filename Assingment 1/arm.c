#include<stdio.h>
int main()
{
    int n,r,s=0,t;
    t=n;
    printf("enter the arm");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        s=s+r*r*r;
        r=n/10;
    }
    if(t==s)
        printf("no is arm");
    else
        printf("no is not arm");
    return 0;
}