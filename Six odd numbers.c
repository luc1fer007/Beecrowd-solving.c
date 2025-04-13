#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int X,i;
    scanf("%d",&X);
    
    int y = X + 11;
    for(i = X ; i <= y ; i++)
    {
        if ( i % 2 != 0)
        {
            printf("%d\n",i);
        }

    }
    return 0;
}