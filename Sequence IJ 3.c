#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i = 0 ; i <= 9 ; i +=2)
    {
        for(j = i+6 ; j >= i+4 ; j--)  //j=i+6 when i=1 then j=7, condition will be i+4 =(1+4)=5
        {
            printf("I=%d J=%d\n",i,j);  // and j-- means 7 6 5 depends on the value  of i;
            
        }
    }
    return 0 ;
}