#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int N,X;
    scanf("%d",&N);
    for(int i = 0; i <= N ; i++)
    {
        scanf("%d",&X);
        if(X % 2 ==0  && X > 0)
        {
            printf("EVEN POSITIVE\n");

        }
        else
        {
            printf("ODD NEGATIVE\n");
        }
        if( X % 2 == 0 && X < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
        else
        {
            printf("ODD POSITIVE\n");
        }
        if( X == 0)
        {
            printf("NULL\n");
        }
    
    }
    return 0;
}