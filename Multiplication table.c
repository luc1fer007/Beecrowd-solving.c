#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(int i = 1 ; i <= 10 ; i++)
    {
        printf("%d x %d = %d\n",i,N,(i*N));
    }
    return 0;
}