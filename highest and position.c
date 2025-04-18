#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,arr[100];
    for(int i = 0 ; i < 100 ; i++)
    {
        scanf("%d",&arr[i]);

    }
    int max = arr[0];
    int pos = -1;      //assume that the position in -1 not in 0(start)
    for(int i = 0 ; i < 100 ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];  //the num will be print at his index//
            pos = i+1;   //here i is index and should i + 1 for exact same position
            
            
        }
      
    }
   
    printf("%d\n",max);
    printf("%d\n",pos);
    return 0;
    
}