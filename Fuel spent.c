#include<stdio.h>
int main()
{
    int time, speed;
    scanf("%d",&time);
    scanf("%d",&speed);

    int distance =  time * speed;

    double litre = (double)distance/12;

    printf("%.3lf\n",litre);
    return 0;
}