#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int A,B,C,D,E;
    int count = 0;
    int odd_c = 0;
    int pos_c = 0;
    int neg_c = 0;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    scanf("%d",&E);
    if ( A % 2 == 0) count++;
    if ( B % 2 == 0) count++;
    if ( C % 2 == 0) count++;
    if ( D % 2 == 0) count++;
    if ( E % 2 == 0) count++;

    if ( A % 2 != 0) odd_c++;
    if ( B % 2 != 0) odd_c++;
    if ( C % 2 != 0) odd_c++;
    if ( D % 2 != 0) odd_c++;
    if ( E % 2 != 0) odd_c++;

    if ( A  > 0)     pos_c++;
    if ( B  > 0)     pos_c++;
    if ( C  > 0)     pos_c++;
    if ( D  > 0)     pos_c++;
    if ( E  > 0)     pos_c++;
    

    if ( A  < 0) neg_c++;
    if ( B  < 0) neg_c++;
    if ( C  < 0) neg_c++;
    if ( D  < 0) neg_c++;
    if ( E  < 0) neg_c++;
    



    printf("%d valor(es) par(es)\n",count);
    printf("%d valor(es) impar(es)\n",odd_c);
    printf("%d valor(es) positivo(s)\n",pos_c);
    printf("%d valor(es) negativo(s)\n",neg_c);
    return 0;
}