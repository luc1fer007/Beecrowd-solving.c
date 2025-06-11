
#include<stdio.h>
int main()
{
    int i,X,sum = 0;//count = 0;
    while(1)
    {
        scanf("%d",&X);
        sum = 0;
        // count = 0;
        if(X==0)
        {
            break;
        }
        else      //dont use double if always think of the condition first//
        {
            for(i=X ; i<(X+10) ; i+=1)
            {
                if(i % 2 == 0)
                {
                    sum+=i;
                    // count++;
                    

                }


            }
            // printf("%d\n%d\n",count,sum);
            printf("%d\n",sum);
        }
        
    }
    // printf("\n");
    return 0;
}
