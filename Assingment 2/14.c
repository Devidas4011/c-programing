#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter x and y coordinate:");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0)
    printf("The point lies at the Origin.\n");
    else if(x > 0 && y > 0)
    printf("The point lies in Quadrant I.\n");
    else if(x < 0 && y > 0)
    printf("The point lies in Quardrant II.\n");
    else if(x < 0 && y >0)
    printf("The point lies in Quadrant III.\n");
    else if(x > 0 && y < 0)
    printf("The point lies in Quadrant IV.\n");
    else if(x==y)
    printf("The point lies on the y-axis.\n");
     else if(y==0)
    printf("The point lies on the x-axis.\n");
    return 0;
}