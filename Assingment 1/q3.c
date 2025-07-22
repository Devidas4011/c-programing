#include<stdio.h>
int main()
{
    int f,c,k;
    printf("Enter the radious:");
    scanf("%d",&f);
    c=(5/9)*(f-32);
    k=(c+273.15);
    printf("Celsius:%d",c);
    printf("Kelvin:%d",k);
    return 0;
}