#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double A,B,C,R1,R2;
    scanf("%lf %lf %lf",&A,&B,&C);

    double discriminant = (B * B)-(4* A *C); // proper spacing required 

    if(discriminant < 0 || A == 0)  //proper space needed
    {
        printf("Impossivel calcular\n"); //escape function needed
    }
    else
    { 
        double R1 = (-B + (sqrt(discriminant))) / (2 * A); 
        double R2 = (-B - (sqrt(discriminant))) / (2 * A); // proper spacing method
        printf("R1 = %.5lf\n",R1); //escape function needed 
        printf("R2 = %.5lf\n",R2); // escape needed to print proper (presentation);
    }

    return 0;
}
