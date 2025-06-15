#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i = 0 ; i < N ; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    int s ;
    for(int i = 0 ; i < N ; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
            s = i;

        }

    }printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",s);
    return 0;

}
