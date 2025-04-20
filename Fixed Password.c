#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int N;
    for(int i = 0 ; i <= 100000 ; i++)
    {
        if(N==2002)
        {
            break;
        }
        else
        {
            scanf("%d",&N);
            if(N==2002){
                printf("Acesso Permitido\n");
            }
            else
            {
                printf("Senha Invalida\n");

            }

        }
    }
    return 0;
}