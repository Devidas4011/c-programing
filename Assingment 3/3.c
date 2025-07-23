#include<stdio.h>
int main()
{
    int x,y,op,p,g;
    printf("1.Equallity\n2.Less than\n3.Quotient and remainder\n4.Range\n5.swap\n");
    printf("Enter the choice");
    scanf("%d",&op);
    printf("Enter the two no:");
    scanf("%d%d",&x,&y);
    switch(op)
    {
      case 1:
             (x==y)?printf("X and Y equal"):printf("Not equal");
             break;
      case 2:(x<y)?printf("X is less than Y"):printf("X is grater than Y");
             break;
      case 3:(p=x/y)?printf("Quotient:%d\n",p):printf(" Quotient:%d\n",p);
               (p=x%y)?printf("remainder:%d\n",p):printf(" remainder:%d\n",p);
             break;
       case 4:
              printf("Enter the between no:");
              scanf("%d",&g);
              (g>=x && g<=y)?printf("in between"):printf("Not betwwen");
               break;
       case 5:
              y=x+y-(x=y);
              printf("%d",x);
              printf("%d",y);
              break;
      default:
      printf("invalid choice");
             
    }
    return 0;
}