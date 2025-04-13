#include<stdio.h>
int main()
{
    double A,B,sum,MEDIA;
    scanf("%lf",&A);
    scanf("%lf",&B);

    sum = (A*3.5)+(B*7.5);

    MEDIA =sum/11.0;
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}