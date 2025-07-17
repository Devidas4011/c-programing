#include<stdio.h>
int main()
{
    int id,pr1,pr2,pr3,qr1,qr2,qr3,total,dis,disa,am;
    char nm[20];
    
    printf("enter the id:");
    scanf("%d",&id);
    printf("\n enter the name:");
    scanf("%s",&nm);
    printf("\nenter the price 1:");
    scanf("%d",&pr1);
    printf("\nenter the price 2:");
    scanf("%d",&pr2);
    printf("\nenter the price 3:");
    scanf("%d",&pr3);
     printf("\nenter the quantity 1:");
    scanf("%d",&qr1);
    printf("\nenter the quantuty 2:");
    scanf("%d",&qr2);
    printf("\nenter the quanity 3:");
    scanf("%d",&qr3);

     total=(pr1*qr1)+(pr2*qr2)+(pr3*qr3);

     if(total>=1000)
       dis=10;
     else if(total>=800)
       dis=8;
    else if(total>=500)
      dis=5;
    else if(total>=300)
      dis=3;
   else
       dis=0;

    printf("\npoduct id:%d",id);
    printf("\nproduct name:%s",nm);
    printf("\ntotal value:%d",total);
       
    printf("\n discount percentage:%d",dis);
    disa=(total*dis/100);
    printf("\ndiscount value:%d",disa);
     
    am=total-disa;
    printf("\ntotal discount amount:%d",am);
    return 0;
}