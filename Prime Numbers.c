#include<stdio.h>
#include<stdlib.h>
int main()
{
    short int N,i;
    long long int j,x,count = 0;
    scanf("%hd",&N);
    for( i = 1 ; i <= N ; i++)
    {
        scanf("%lld",&x);
        count = 0;
        if(x==1)printf("%lld nao eh primo\n",x);
        else{
        for(j = 1 ; j <= x ; j++ )
        {
            if(x % j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%lld eh primo\n",x);
        }
        else
        {
            printf("%lld nao eh primo\n",x);
        }
        }
    }
    return 0;
}
