#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the three no");
    scanf("%d%d%d",&a,&b,&c);
    (a>b && a>c)? printf("\n a maximum=%d",a):(b>a && b>c)? printf("\nB maximum no is=%d",b):("\nC Maximum no=%d",c);
    (a<b && a<c)? printf("\na minimum=%d",a):(b<a && b<c)? printf("\nB minimum no is=%d",b):("\nC Minimum no=%d",c);
    return 0;
}