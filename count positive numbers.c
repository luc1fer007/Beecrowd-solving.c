#include<stdio.h>
int main()
{
    int A,B,C,F,count=0;
    double E,D;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%lf",&D);
    scanf("%lf",&E);
    scanf("%d",&F);
    if ( A > 0) count++;
    if ( B > 0) count++;
    if ( C > 0) count++;
    if ( D > 0.0) count++;
    if ( E > 0.0) count++;
    if ( F > 0) count++;

    printf("%d valores positivos\n",count);
    return 0;

    
}