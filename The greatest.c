#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int num[3];
    for(int i = 0 ; i < 3 ; i++)
    {
        scanf("%d",&num[i]);
    }
    int max = num[0];
    for(int i = 0 ; i < 3 ; i++)
    {
        if(max < num[i])
        {
            max = num[i];
        }

    }printf("%d eh o maior\n",max);
    return 0;
}