#include<stdio.h>
#include<stdlib.h>
int main()
{
    double salary;
    scanf("%lf",&salary);
    char p = '%';
    if(salary >= 0 && salary <= 400.00)
    {
        
        double earned = salary * (0.15);

        double money_earned = salary + earned ;
        
        printf("Novo salario: %.2lf\n",money_earned);
        printf("Reajuste ganho: %.2lf\n",earned);
        printf("Em percentual: 15 %c\n",p);
    }
    else if ( salary >= 400.01 && salary <= 800.00)
    {
        double earned = salary * (0.12);
        double money_earned = salary + earned;

        printf("Novo salario: %.2lf\n",money_earned);
        printf("Reajuste ganho: %.2lf\n",earned);
        printf("Em percentual: 12 %c\n",p);
        
    }
    else if (salary >= 800.01 && salary <= 1200.00)
    {
        double earned = salary * (0.10);
        double money_earned = salary + earned;

        printf("Novo salario: %.2lf\n",money_earned);
        printf("Reajuste ganho: %.2lf\n",earned);
        printf("Em percentual: 10 %c\n",p);

    }
    else if (salary >= 1200.01 && salary <= 2000.00)
    {
        double earned = salary * (0.07);
        double money_earned = salary + earned;

        printf("Novo salario: %.2lf\n",money_earned);
        printf("Reajuste ganho: %.2lf\n",earned);
        printf("Em percentual: 7 %c\n",p);

    }
    else
    {
        double earned = salary * (0.04);
        double money_earned = salary + earned;

        printf("Novo salario: %.2lf\n",money_earned);
        printf("Reajuste ganho: %.2lf\n",earned);
        printf("Em percentual: 4 %c\n",p);

    }
    return 0;

}