#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double A , B , C;
    scanf("%lf %lf %lf",&A,&B,&C);

    double temp ;  // c doesnot have built is sort mode;
    //sorting to make A largest ;
    if ( A < B)     // so decreasing and increasing value should be done with temp value;
    {
        temp = A;
        A = B;
        B = temp;
    }
    if ( A < C)
    {
        temp = A;
        A = C ;
        C = temp;
    }
    if ( B < C)
    {
        temp = B;
        B = C;
        C = temp;
    }
    


    
    double power_A = (A * A);
    double power_B = (B * B); 
    double power_C = (C * C );
    double sum_ = power_B + power_C;

    if ( A > ( B + C) || A == (B + C))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else 
    {
        if ( (power_A) == (sum_))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if ( power_A > (sum_))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ( power_A < (sum_))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if ( A == B && B == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if( A == B || B == C || C == A )
        {
            printf("TRIANGULO ISOSCELES\n");
        }
        
    }
   
    return 0;
}