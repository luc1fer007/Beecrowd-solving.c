#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int X,Y;
    scanf("%d",&X);
    scanf("%d",&Y);
    int sum = 0;
    
    if(X  > Y)
    {
        for(int i = Y+1 ; i < X ; i++) //for negative integer Y+1;
        {
            //printf("%d\n",i);
            
            if ( i % 2 != 0)
            {
                sum += i;
            }
        }
        //printf("%d\n",sum);
    }
    else if (Y  >  X)
    {
        for(int i = X-1 ; i < Y ; i++) //(x-)to remove unneccesary value;
        {
            
            if ( i % 2 !=0)
            {
                sum = sum + i;
            }
        }

    }
    else{
        sum = 0;
    }
    
 
    printf("%d\n",sum);
    return 0;
}