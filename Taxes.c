#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    double salary,salary_,total;
    scanf("%lf",&salary);

    if (salary >= 0.00 && salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salary >= 2000.00 && salary <= 3000.00)
    {
        if(salary >= 2000.00)
        {
            double salary_ = salary - 2000.00;
            total = (0.08*salary_);
            printf("R$ %.2lf\n",total);

        }
        else if(salary <= 3000.00)
        {
            salary_ = salary - 3000.00;
            total = (0.08 * salary_);
            printf("R$ %.2lf\n",total);
        }

        
    }
    else if (salary >= 3000.01 && salary <= 4500.00 )
    {
        if(salary >= 3000.01)
        {
            salary_ = salary - 3000.01;
            total = (0.08 * 1000) + (.18 * salary_);
            printf("R$ %.2lf\n",total);
        }
        else if(salary <= 4500.00)
        {
            salary_ = salary - 4500.00;
            total = (0.08  * 1000) + (0.18 * salary_);
            printf("R$ %.2lf\n",total);
        }
    }
    else
    {
        double salary_ = salary - 4500.00;
        double total = (0.08 * 1000) + (0.18 * 1500) + (0.28 * salary_);
        printf("R$ %.2lf\n",total);
    }
    return 0;
}