#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
int main()
{
    int N;
    scanf("%d",&N);
    
    for(int i = 0 ; i <= 10000 ; i++)
    {
        if(i % N == 0)
        {
            
            printf("%d\n",2 + i);
        }
    }
    return 0;
}