#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int X;
    scanf("%d",&X);
    for ( int i = 0 ; i <= X ; i++)
    {
        if ( i % 2 != 0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}