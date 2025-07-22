#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the 3 no");
    scanf("%d%d%d",&a,&b,&c);

    (a>b && a>b || b>a && b>c)?printf("%d",a):printf("%d",c);
    return 0;
}