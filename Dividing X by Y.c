#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int X , Y;
    for(int i = 0 ; i <= 100000 ; i++)
    {
        if(X == 0 && Y == 0)
        {
            break;
        }
        else
        {
            scanf("%d %d",&X ,&Y);
           
            if(X == 0 && Y <= 0 || X == 0 && Y >= 0)
            {
                printf("divisao impossivel\n");
            }
            if(X > 0 && Y > 0) printf("%.1f\n",(float)X / (float)Y);
            if(X < 0 && Y > 0) printf("%.1f\n",(float)X / (float)Y);
            if(X > 0 && Y < 0) printf("%.1f\n",(float)X / (float)Y);


            
            // if(X > 0 && Y > 0)
            // {
            //     printf("%f",(float)X / Y);
            // }
            // if(X < 0 && Y == 0) 
            // {
            //     printf("%.1f",(float)X / Y);
            // }
               
          

        }
    }
    return 0;
} 