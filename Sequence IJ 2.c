#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i,j;
    for(i = 1 ; i <= 9 ; i= i+2 ) // I should be print 3 times but J should be printed 1 time
    {
        for(j = 7 ; j >= 5 ; j--)  // i is dependent on this loop printing 3 times//
        {
            printf("I=%d J=%d\n",i,j); // Nested looop for calculating J
            // printf("I=%d J=%d\n",i,j); // inside loop they will print 6 time so comment it
            // printf("I=%d J=%d\n",i,j);
        }
       
    
        
        
    }
    return 0;

}