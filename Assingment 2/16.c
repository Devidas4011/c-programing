#include<stdio.h>
int main()
{
    int m1,m2,m3,total,avg;
    printf("enter the mark 1:");
    scanf("%d",&m1);
    printf("enter the mark 2:");
    scanf("%d",&m2);
    printf("enter the mark 3:");
    scanf("%d",&m3);
    total=(m1+m2+m3);
     avg=(total/3);
     printf("\n total:%d",total);
     printf("\n Avg:%d\n",avg);
    if(avg>80)
    printf("Class I");
    else if(avg>60)
    printf("Class II");
    else if(avg>35)
    printf("Class III");
    else
        printf("Fail");
    return 0;
}