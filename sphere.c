#include<stdio.h>
#include<math.h>
int main()
{
    int R;
    scanf("%d",&R);

    double  pi = 3.14159;

    double  volume = (4/3.0)*pi*(pow(R,3));

    printf("VOLUME = %.3lf\n",volume);

    return 0;
} 