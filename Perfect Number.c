#include<stdio.h>
#include<stdlib.h>
int main()
{
    short int N,i;
    long long int j,x,sum = 0;
    scanf("%hd",&N);
    for( i = 1 ; i <= N ; i++)
    {
        scanf("%lld",&x);
        sum =  0;
        for(j = 1 ; j < x ; j++ )
        {
            if(x % j == 0)
            {
                sum = sum+j;
            }
        }
        if(sum == x)
        {
            printf("%lld eh perfeito\n",x);
        }
        else
        {
            printf("%lld nao eh perfeito\n",x);
        }
    }
    return 0;
}
