#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double A;
    scanf("%lf",&A);

    if(A < 0 || A > 100)
    {
        printf("Fora de intervalo\n");
    }
    else
    {
        if(A >= 0 && A <= 25.0000)
        {
            
            printf("Intervalo [0,25]\n");
        }
        else if(A > 25.00001 && A > 50.0000000)
        {
            printf("Intervalo (75,100]\n");

        }
        else
        {
            printf("Intervalo (25,50]\n");
            
        }
    }
    return 0;
}