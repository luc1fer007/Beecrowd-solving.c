
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    int x,y,k, N;
    int sum = 0;
    scanf("%d",&N);
    for(int i = 1 ; i <= N ; i++)  //if it was array then it would be i=0 ; i < N ; i++
    {
        scanf("%d %d",&x,&y);           //another way to take input N times//

        if(x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        sum = 0;
        for(int i = x + 1 ; i < y ; i++)
        {
            if(i % 2 != 0)
            {
                sum = sum + i;
            }
           

    
    
        }
        printf("%d\n", sum);

    }
 
    return 0;

}