#include<stdio.h>
#include<stdlib.h>
int main()
{
    int T,A,B,C,D,E;
    int count = 0;
    scanf("%d",&T);
    scanf("%d %d %d %d %d ",&A,&B,&C,&D,&E);
    
   
    
    if (A == T) count++;
    if (B == T) count++;  //new things of code where every if will be checked//
    
    if (C == T) count++;
    if (D == T) count++;
    if (E == T) count++;
  
  
  
  
  
  
    printf("%d\n",count);
    return 0;

    

    
}