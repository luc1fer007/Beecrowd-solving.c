#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int x,y,hs,he,ms,me,ss,se;
    int date,hour,min,sec;

    printf("Dia ");
    scanf("%d",&x);
    scanf("%d : %d : %d",&hs,&ms,&ss);
    printf("Dia ");
    scanf("%d",&y);
    scanf("%d : %d : %d",&he,&me,&se);

    // if (x >=y)
    // {
    //     Date 
    // }


    // date = ( y - x);
    // if(hs >= he)
    // {
    //     hour = (24 - hs) + he;
    // }
    // else 
    // {
    //     hour = he - hs;
    // }
    // if(me>=ms)
    // {
    //     min = me - ms;
    // }
    // else
    // {
    //     min = (60 - ms) + me;
    //     hour--;
    // }
    // if(hour<0)
    // {
    //     hour = 23;
    // }
    printf("%d dia(s)\n");
    printf("%d hora(s)\n");
    printf("%d minuto(s)\n");
    printf("%d segundo(s)\n");


    

}