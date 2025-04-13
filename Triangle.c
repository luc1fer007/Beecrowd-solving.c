#include<stdio.h>
#include<stdlib.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);

    if(((A + B) > C)  && ((B + C) > A) && ((A + C) > B))
    {
        
        double parameter = A + B + C ;
        printf("Perimetro = %.1lf\n",parameter); 
    }
    else 
    {
        double area = 0.5 * (A + B) * C;
        printf("Area = %.1lf\n",area);
    }
    return 0;
}