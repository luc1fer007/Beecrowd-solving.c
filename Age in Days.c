#include<stdio.h>
#include<math.h>

int main()
{
    int age,days_;
    scanf("%d",&age);

    float year = age/365.0;
    float month = (year - trunc(year))*12;
    float day = (month - trunc(month))*30;


    int years = round(year);
    int months =round(month);
    int days = ceil(day);

    if(days==30)
    {
        days = 0;
        
    }
  

    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);

    return 0;






}

//previous code is ok but there is an updated code for fresh printing.
#include<stdio.h>

int main()
{
    int age, years, months, days;
    scanf("%d", &age);                             // Read the input age in days

    years = age / 365;                             // 1. Calculate the number of full years
    age = age % 365;                               // 2. Get the remaining days after calculating years

    months = age / 30;                            // 3. Calculate the number of full months
    days = age % 30;                              // 4. The remaining days after calculating months

    printf("%d ano(s)\n", years);                 // 5. Print the number of years
    printf("%d mes(es)\n", months);               // 6. Print the number of months
    printf("%d dia(s)\n", days);                  // 7. Print the number of days

    return 0;
}



