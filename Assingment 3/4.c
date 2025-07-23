#include<stdio.h>
int main()
{
    int r,ch,ar,arc,v,h;
    printf("1.Area of circle\n2.circumference\n3.volume\n");
    printf("Enter the choice");
    scanf("%d",&ch);
    printf("Enter the Radious:");
    scanf("%d",&r);
    switch(ch)
    {
        case 1:
              ar=3.14*r*r;
              printf("\n Area of circle:%d",ar);
              break;
        case 2:
             arc=2*3.14*r;
             printf("Circumference:%d",arc);
             break;
        case 3:
              printf("Enter the height:");
              scanf("%d",&h);
               v=3.14*r*r*h;
               printf("Volume:%d",v);
               break;
        default:
         printf("invalid choice");
    }
    return 0;
}