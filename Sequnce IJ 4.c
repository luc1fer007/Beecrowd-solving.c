#include<stdio.h>
#include<stdlib.h>
int  main()
{
    float i,j;
    
    for(i= 0 ; i <= 2.001 ; i = i + 0.2)   //taking 2.001 cause it will take 2 as int otherwise(2.00) it will take 1.99!!
    {
        for(j = 1 ; j <= 3 ; j++)
        {
            float sum = i + j;  //sum = outer value + inner value;
           
            if((int)(i*10) % 10 == 0)   // multiply by 10 to remove the floating after value(type casting)
            {
                printf("I=%.0f J=%0.0f\n",i,sum);
            }
            else
            {
                printf("I=%.1f J=%.1f\n",i,sum);
            }
        

        }
    }
    return 0;
}




