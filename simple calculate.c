#include<stdio.h>
#include<math.h>

int main()
{
    int product_1,unit_1,product_2,unit_2;
    float product_1_price, product_2_price;

    scanf("%d %d %f",&product_1,&unit_1,&product_1_price);
    
    scanf("%d %d %f",&product_2,&unit_2,&product_2_price);

    float pagar = (product_1_price*unit_1)+(product_2_price*unit_2);
    printf("VALOR A PAGAR: R$ %.2f\n",pagar);

    return 0;
}