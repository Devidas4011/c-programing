#include<stdio.h>
int main()
{
   float h,r,v,s;
  // float v,s;
    printf("enter the height");
    scanf("%f",&h);
    printf("enter the radiues");
    scanf("%f",&r);
    s=(2*3.14*r*r)+(2*3.14*r*h);
    printf("surface:%f",s);
    v=(3.14*r*r*h);
    printf("volume:%f",v);
    return 0;
}