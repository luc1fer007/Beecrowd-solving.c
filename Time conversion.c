#include<stdio.h>
#include<math.h>
int main()
{
    int N;
    scanf("%d",&N);

    double hours = N/3600.0;
    double minutes = (hours - trunc(hours)) *60.0;
    
    float seconds = ((minutes - trunc(minutes))*60.0);

    int hour = hours;
    int minute = minutes;
    int second = seconds;

    

    printf("%d:%d:%d\n",hour,minute,second);



    
    return 0;
}