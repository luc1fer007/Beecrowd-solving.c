#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    double N;
    scanf("%lf",&N);

    double hundred = (int)N % 100;
    double fifty = (int)hundred %50
    // double twenty = (fifty - trunc(fifty))/0.20;
    // double ten = (twenty - trunc(twenty))/0.10;
    // double five = (ten - trunc(ten))/0.5;
    // double two  = (five - trunc(five))/0.2;

    // int hundreds = hundred;
    // int fifties = fifty;
    // int twenties = twenty;
    // int tens = ten;
    // int fives = five;
    // int twos = two;





    

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",hundred);
    printf("%d nota(s) de R$ 50.00\n",fifties);
    // printf("%d nota(s) de R$ 20.00\n",twenties);
    // printf("%d nota(s) de R$ 10.00\n",tens);
    // printf("%d nota(s) de R$ 5.00\n",fives);
    // printf("%d nota(s) de R$ 2.00\n",twos);
    // printf("MOEDAS:\n");
    // printf("%d moeda(s) de R$ 1.00", )
    // printf("%d moeda(s) de R$ 0.50", )
    // printf("%d moeda(s) de R$ 0.25", )
    // printf("%d moeda(s) de R$ 0.10", )
    // printf("%d moeda(s) de R$ 0.05", )
    // printf("%d moeda(s) de R$ 0.01", )



    return 0;
    
    
}



// int main()
// {
//     double N;
//     scanf("%lf",&N);

    
// }