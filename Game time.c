#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int start,end;
    scanf("%d %d",&start,&end);

    

    int duration = ( end- start + 24 ) %24 ; // formula to convert time to duration
    if(start == end)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else 
    {
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    return 0;
    
}



// Another way
#include <stdio.h>

int main() {
    int start_time, end_time;
    scanf("%d %d", &start_time, &end_time);

    int duration;

    if (start_time < end_time) {
        duration = end_time - start_time;
    } else if (start_time > end_time) {
        duration = (24 - start_time) + end_time;
    } else {
        duration = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);
    return 0;
}
