#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main()
{
    int M,N,i,sum = 0;
    while(1)
    {
        sum = 0;
        scanf("%d %d",&M,&N);
        if((M == 0 && N == 0) || (M <= 0 || N <= 0))
        {
            break;
        }
        if(M < N)
        {
            for(i = M ; i <= N ; i++)
            {
                printf("%d ",i);
                sum += i;
            }printf("Sum=%d\n",sum);
        }
        else
        {
            for(i = N ; i <= M ; i++)
            {
                printf("%d ",i);
                sum += i;
            }printf("Sum=%d\n",sum);
        }
    }
    return 0;
}

