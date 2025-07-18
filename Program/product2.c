#include<stdio.h>
int main()
{
    int id1,id2,id3,dis;
    char nm1[100],nm2[100],nm3[100];
    float qty1,qty2,qty3,pr1,pr2,pr3;
    float total,disamt,finamamt;

    printf("Product Detailed 1:\n");
    printf(" ID :");
    scanf("%d",&id1);
    printf("\nName :");
    scanf("%s",&nm1);
    printf("\n Price :");
    scanf("%f",&pr1);
    printf(" \n Quantity :");
    scanf("%f",&qty1);

    printf("\nProduct Detailed 2:\n");
    printf("\n ID :");
    scanf("%d",&id2);
    printf("\n Name :");
    scanf("%s",&nm2);
    printf("\nPrice :");
    scanf("%f",&pr2);
    printf("\nQuantity :");
    scanf("%f",&qty2);

    printf("\nProduct Detailed 3:\n");
    printf("\n ID :");
    scanf("%d",&id3);
    printf("\nName :");
    scanf("%s",&nm3);
    printf("\nPrice :");
    scanf("%f",&pr3);
    printf("\nQuantity :");
    scanf("%f",&qty3);

    total=(pr1*qty1)+(pr2*qty2)+(pr3*qty3);

    if (total>=10000)
      dis=10;
    else if(total>=7000)
     dis=8;
    else if(total>=5000)
    dis=5;
    else if(total>=3000)
     dis=3;
    else
      dis=0;

    disamt=(total*dis)/100;

    finamamt=total-disamt;

    printf("\n----------------------------------------------------------------------------");
    printf("\n|  id  |      name        |     price      |      qty       |      total    |");
    printf("\n----------------------------------------------------------------------------|");
    printf("\n|%6d|%18s|%16.2f|%16.2f|%15.2f",id1,nm1,pr1,qty1,(pr1*qty1));
    printf("\n----------------------------------------------------------------------------|");
    printf("\n|%6d|%18s|%16.2f|%16.2f|%15.2f",id2,nm2,pr2,qty2,(pr2*qty2));
    printf("\n----------------------------------------------------------------------------|");
    printf("\n|%6d|%18s|%16.2f|%16.2f|%15.2f",id3,nm3,pr3,qty3,(pr3*qty3));
    printf("\n----------------------------------------------------------------------------|");
    printf("\n\t\t\ttotal                                       :%.2f",total);
    printf("\n\t\t\tdiscount amount                             :%.2f",disamt);
    printf("\n\t\t\tfinal discount total                        :%.2f",finamamt);
    return 0;
}