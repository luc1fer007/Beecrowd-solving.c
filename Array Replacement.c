#include<stdio.h>
#include<stdlib.h>
int main()
{
    int X[10];
    for(int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&X[i]);

    }
    for(int i = 0 ; i < 10 ; i++)
    {
        if((X[i] == 0) || (X[i] < 0))
        {
            printf("X[%d] = %d\n",i,1);
        }
        else
        {
            printf("X[%d] = %d\n",i,X[i]);
        }
        
    }

}
