#include<stdio.h>

#include<math.h>
int main()
{
    int X , Y;
    for(int i = 1 ; i <= 1000 ; i++)
    {
        if(X == Y) break;
        else
        {
            scanf("%d %d",&X,&Y);
            if(X == Y)
            {
                break;
            }
            if(X > Y)
            {
                printf("Decrescente\n");
            }
            else
            {
                printf("Crescente\n");
            }

        }

       
     

     
        
    }
  
    return 0 ;
}
