#include<stdio.h>
int main()
{
    float u,a,t,v,s;
    printf("enter the velocity");
    scanf("%f",&u);
    printf("enter the acceleration");
    scanf("%f",&a);
    printf("enter the time");
    scanf("%f",&t);
    v=u+a*t;
    s=u+a*t*t;
    printf("velocity:%.2f",v);
    printf("Distance:%.2f",s);
    return 0;
}