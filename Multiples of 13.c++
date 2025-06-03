#include<stdio.h>
#include<math.h>
int main()
{
    long long int X,Y,sum = 0,i;
    scanf("%lld",&X);
    scanf("%lld",&Y);
    if( X > Y)
    {
        for(i = Y ; i <= X ; i++)
    {
        if(i % 13 != 0)
        {
            sum += i;
        }
    }
    printf("%lld\n",sum);

    }
    else  //(Y > X)
    {
        for(i = X ; i <= Y ; i++)
        {
            if(i % 13 != 0)
            {
                sum += i;
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
