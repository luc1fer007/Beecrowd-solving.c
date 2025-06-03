#include<stdio.h>
#include<math.h>
int main()
{
    long long int X,Y,i;
    scanf("%lld",&X);
    scanf("%lld",&Y);
    if( X > Y)
    {
        for(i = Y+1 ; i < X ; i++)  //+1 for not including x and y;
    {
        if(i % 5 == 2 || i % 5 == 3)
        {
            printf("%lld\n",i);
        }
    }
    }
    else  //(Y > X)
    {
        for(i = X+1 ; i < Y ; i++)  //+1 for not including x and y;
        {
            if(i % 5 == 2 || i % 5 == 3)
        {
            printf("%lld\n",i);
        }
        
        }
    }
    return 0;
}
