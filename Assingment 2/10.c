#include<stdio.h>
int main()
{
    int t1,t2,t3,t4,t5,t6;
    printf("Enter the 1 tringle");
    scanf("%d",&t1);
    printf("Enter the 2 tringle");
    scanf("%d",&t2);
    printf("Enter the 3 tringle");
    scanf("%d",&t3);

    if(t1>t2 && t1>t3)
    {
         t4=t2+t3;
         if(t4>t1)
         printf("valid");
        else
         printf("invalid");

    }
    else if(t2>t1 && t2>t3)
    {
         t5=t1+t3;
         if(t5>t2)
         printf("valid");
        else
         printf("invalid");
    }
    else 
    {
          t6=t1+t2;
          if(t6>t3)
          printf("valid");
          else
         printf("invalid");
    }
    return 0;
}