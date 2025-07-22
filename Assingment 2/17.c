#include<stdio.h>
int main()
{
    int q1,q2,q3,p1,p2,p3,dis,totals,totala;
    float disa;
    char i1[100],i2[100],i3[100];
    printf("\nEnter the item 1:");
    scanf("%s",&i1);
    printf("\nEnter the price 1:");
    scanf("%d",&p1);
    printf("\nEnter the quantity 1:");
    scanf("%d",&q1);

    printf("\nEnter the item 2:");
    scanf("%s",&i2);
    printf("\nEnter the price 2:");
    scanf("%d",&p2);
    printf("\nEnter the quantity 2:");
    scanf("%d",&q2);

     printf("\nEnter the item 3:");
    scanf("%s",&i3);
    printf("\nEnter the price 3:");
    scanf("%d",&p3);
    printf("\nEnter the quantity 3:");
    scanf("%d",&q3);

    totals=(p1*q1)+(p2*q2)+(p3*q3);
 
    if(totals>10000)
    dis=20;
    else if(totals>5000)
     dis=15;
    else if(totals>1000)
     dis=8;
    else 
     dis=0;

     disa=(totals*dis)/100;
     totala=totals-disa;
     
    printf("\n Total amount:%d",totals);
    printf("\n discount:%d",dis);
    printf("\n discount amount:%f",disa);
    printf("\n Total  Discount amount:%d",totala);
    
    return 0;
}