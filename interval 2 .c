#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i,N,X;
    int in= 0;
    int out = 0;

    scanf("%d",&N);
    for( i = 0 ; i < N; i++)
    {
        
        scanf("%d",&X);
        //printf("%d\n",num); //we have to print with the scanf cause its not an array//
        if(X >= 10 && X <= 20)
        {
            in = in + 1;
            
        }
        else
        {
            out +=1;
        }
        
    }
    printf("%d in\n",in);
    printf("%d out\n",out);  
    return 0; 
    

}  