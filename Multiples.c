#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int  main()            //dont use void compilation error
{
    int A,B;
    scanf("%d %d",&A,&B);
    if( B % A == 0 || A % B == 0 )
    {
        printf("Sao Multiplos\n");
    }
    else if( B % A != 0 )
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;

    
}