#include<stdio.h>
int main()
{
    int cp,sp,pr,ls;
    printf("Enter the cost price");
    scanf("%d",&cp);
    printf("Enter selling price");
    scanf("%d",&sp);
    if(sp>cp)
    {
        pr=sp-cp;
        printf("Profit=:%d\n",pr);
    }
    else{
        ls=sp-cp;
         printf("Loss=:%d",ls);
    }
   
    return 0;
}