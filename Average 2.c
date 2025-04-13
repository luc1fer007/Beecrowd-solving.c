#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C,sum,MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);

    sum = (A*2)+(B*3)+(C*5);

    MEDIA =(sum/10.0);
    printf("MEDIA = %.1lf\n",MEDIA);
    return 0;
}