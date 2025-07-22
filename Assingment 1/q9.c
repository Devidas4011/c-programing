#include<stdio.h>
int main()
{
    int one,five,ten,amt;
    printf("Enter the amount:");
    scanf("%d",&amt);
    ten=amt/10;
    amt=amt%10;

    five=amt/5;
    amt=amt%5;

    one=amt;

    printf("\nten notes:%d",ten);
     printf("\nfive notes:%d",five);
      printf("\none notes:%d",one);
    return 0;
}