#include<stdio.h>
int main()
{
    int r,ar,circum;
    printf("Enter the radious:");
    scanf("%d",&r);
    ar=3.14*r*r;
    circum=2*3.14*r;
    printf("Area of:%d\n",ar);
    printf("Circumference:%d",circum);
    return 0;
}