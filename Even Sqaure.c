#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int N;
    int result = 1;
    scanf("%d",&N);
    for(int i = 1 ; i <= N+1 ; i++)
    {
        if(i % 2 == 0)
        {
            //printf("%d\n",i);
            result = i * i;
            printf("%d^2 = %d\n",i,result);
            

        }
        
    }
    return 0;
}