 #include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int X , Y;
    int N;
    scanf("%d",&N);
    for(int i = 1; i <= N ; i++)
    {
        scanf("%d %d",&X,&Y);
        if((X == 0 && Y==0) || (X >= 0 && Y==0) || (X <= 0 && Y == 0))  //(0,0) or (0/1 , 0) or (0/-1,0)
        {
            printf("divisao impossivel\n");
        }
        if(X > 0 && Y > 0 ) printf("%.1f\n",(float)X / Y); //(1,1)
        if(X < 0 && Y < 0 ) printf("%.1f\n",(float)X / Y); //(-1,-1)
        if(X > 0 && Y < 0 ) printf("%.1f\n",(float)X / Y); //(1,-1)
        if(X < 0 && Y > 0 ) printf("%.1f\n",(float)X / Y); //(-1,1)
        if(X == 0 && Y > 0 )printf("%.1f\n",(float)X / Y); //(0,1)
        if(X == 0 && Y < 0 )printf("%.1f\n",(float)X / Y); //(0,-1)

    }
    return 0;
} 
