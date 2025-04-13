#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    scanf("%i",&x);
    float y;
    scanf("%f",&y);

    float total = x/y;
    printf("%.3f km/l\n",total);
    return 0;
}