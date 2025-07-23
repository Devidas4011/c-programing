<<<<<<< HEAD
#include<stdio.h>
int main()
{
     int bs,id;
     float hra=10,ba=30,tax=5,hm;
     printf("enter the id:");
     scanf("%d",&id);
     printf("enter the basic salary ");
     scanf("%d",&bs);
    hra=(bs*hra/100);
    ba=(bs*ba/100);
    tax=(bs*tax/100);
    hm=(hra-ba-tax);
    printf("\nhouse rent:%.2f",hra);
    printf("\nbasic dearness:%.2f",ba);
    printf("\ntax:%.2f",tax);
    printf("\nhome salary:%.2f",hm);
    return 0;
=======
#include<stdio.h>
int main()
{
     int bs,id;
     float hra=10,ba=30,tax=5,hm;
     printf("enter the id:");
     scanf("%d",&id);
     printf("enter the basic salary ");
     scanf("%d",&bs);
    hra=(bs*hra/100);
    ba=(bs*ba/100);
    tax=(bs*tax/100);
    hm=(hra-ba-tax);
    printf("\nhouse rent:%.2f",hra);
    printf("\nbasic dearness:%.2f",ba);
    printf("\ntax:%.2f",tax);
    printf("\nhome salary:%.2f",hm);
    return 0;
>>>>>>> a638da053059c758343ee45c78b3aeaa36d6d6af
}