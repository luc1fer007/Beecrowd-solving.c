#include<stdio.h>
#include<stdlib.h>
int main()
{
    int V;
    scanf("%d",&V);
    for(int i = 0 ; i < 10 ; i++)
    {
        if(i==0)
        {
            printf("N[%d] = %d\n",i,V);
        }
        else if(i > 0)
        {
            V = 2 * V ;
            printf("N[%d] = %d\n",i,((V)));
            
        }

    }
   return 0;
}
