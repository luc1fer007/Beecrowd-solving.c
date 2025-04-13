#include<stdio.h>
#include<math.h>
int main()
{
    int start, first_min, final_hour, final_minute,dur_h,dur_min;
    scanf("%d %d %d %d",&start,&first_min,&final_hour,&final_minute);
    //first calculate hour than min;
    if(start == final_hour && first_min == final_minute)
    {
        dur_h = 24;
        dur_min = 0;
        
    }
    else
    {
      

      //1st calculate hour;

      if ( final_hour >= start)   // must input>= !!
      {
        dur_h = final_hour - start;
      }
      else
      {
        dur_h = (24 - start) + final_hour;
      }
      //2nd calcualted minutes
      if (final_minute >= first_min)  //must input >=!!
      {
        dur_min = final_minute - first_min;
      }
      else
      {
        dur_min = (60 - first_min) + final_minute;
        dur_h --; // if min bigger than 60;
      }
      if(dur_h < 0)
      {
        dur_h = 23;
      }
    

    }
    
    
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",dur_h,dur_min);
    return 0;
}

