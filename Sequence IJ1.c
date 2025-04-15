#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i ,j;
    
   for(i = 1 , j = 60 ; i <= 37 && j >= 0 ; i+=3 , j-=5)  //'?' character has ASCII VALUE = 37 needed to print//
   {
    printf("I=%d J=%d\n",i,j);

   }
   
    return 0;
    
 
}

