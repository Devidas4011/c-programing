#include<stdio.h>
int main()
{
    int t1,t2,t3;
   printf("Enter the 1 tringle");
    scanf("%d",&t1);
    printf("Enter the 2 tringle");
    scanf("%d",&t2);
    printf("Enter the 3 tringle");
    scanf("%d",&t3);

    
     
     if(t1+t2>t3 && t1+t3>t2 && t2+t3>t1)
     printf("valid");
     else
     printf("invalid");
    return 0;
}