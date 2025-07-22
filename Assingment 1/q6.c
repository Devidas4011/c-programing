#include<stdio.h>
int main()
{
    int l,b,h,sur,vol;
    printf("Enter the length:\n");
    scanf("%d",&l);
    printf("Enter the Breadth:\n");
    scanf("%d",&b);
    printf("Enter the Height:\n");
    scanf("%d",&h);
    sur=2*(l*b+1*h+b*h);
    vol=(l*b*h);
    printf("Surface:%d\n",sur);
    printf("Volume:%d",vol);
    return 0;
}