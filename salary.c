#include<stdio.h>
#include<math.h>

int main()
{
    int num,worked_hour;
    float per_hour;

    scanf("%d",&num);
    scanf("%d",&worked_hour);
    scanf("%f",&per_hour);

    float salary = worked_hour * per_hour;

    printf("NUMBER = %d\n",num);
    printf("SALARY = U$ %0.2f\n",salary);

    return 0;
}