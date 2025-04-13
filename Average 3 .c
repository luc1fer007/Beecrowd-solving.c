#include<stdio.h>
#include<math.h>
#include<stdlib.h>
// #include<ctype.h>

int main()
{
    double N1, N2,N3,N4,nota_de_exam;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);

    double average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0 ;

    printf("Media: %.1lf\n",average);

    if(average == 7.0 || average > 7.0)
    {
        
        printf("Aluno aprovado.\n");
    }
    else if ( average < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else                                 //remaining part will be between 5.0 to 6.9
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&nota_de_exam);
        printf("Nota do exame: %.1lf\n",nota_de_exam);

        double average_2 = (nota_de_exam + average) / 2;

        if (average_2 == 5.0 || average_2 > 5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else if ( average == 4.9 || average_2 < 4.9)
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n",average_2);

    
    }

    
    return 0;

    
    
}