#include<stdio.h>
#include<stdlib.h>
int  main()
{
    float i,j;
    
    for(i= 0 ; i <= 2.001 ; i = i + 0.2)
    {
        for(j = 1 ; j <= 3 ; j++)
        {
            float value = i + j;
           
            if((int)(i*10) % 10 == 0)
            {
                printf("I=%.0f J=%0.0f\n",i,value);
            }
            else
            {
                printf("I=%.1f J=%.1f\n",i,value);
            }
        

        }
    }
    return 0;
}


