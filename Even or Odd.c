#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int N,X;
    scanf("%d",&N);
    int arr[N];
    for(int i = 1; i <= N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    // for(int i = 1; i <= N ; i++)         /*its for checking whether we are input N times or not */
    // { 
    //     printf("%d\n",arr[i]);
    // }
    for(int i = 1 ; i <= N ; i++)
    {
        if(arr[i] == 0 ) printf("NULL\n");
        if(arr[i] % 2 == 0 && arr[i] > 0) printf("EVEN POSITIVE\n");
        if(arr[i] % 2 != 0 && arr[i] < 0) printf("ODD NEGATIVE\n");
        if(arr[i] % 2 == 0 && arr[i] < 0) printf("EVEN NEGATIVE\n");
        if(arr[i] % 2 != 0 && arr[i] > 0) printf("ODD POSITIVE\n");
        
    }
    
    
    
    return 0;
}
