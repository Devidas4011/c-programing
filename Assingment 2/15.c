#include<stdio.h>
int main()
{
    int bs,tax;
    printf("Enter the basic salary");
    scanf("%d",&bs);
    if(bs<150000)
    tax=0;
    else if(bs<=300000)
    tax=0.20 *bs;
    else 
    tax=0.30*bs;
  printf("Income tax :%d\n",tax);
    return 0;
}