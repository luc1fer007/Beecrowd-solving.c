#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{ 
    double A,B,C,F,count=0;
    double E,D;
    double A_,B_,C_,F_;
    double E_,D_;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    scanf("%lf",&D);
    scanf("%lf",&E);
    scanf("%lf",&F);
    if ( A > 0) count++;
    if ( B > 0) count++;
    if ( C > 0) count++;
    if ( D > 0) count++;
    if ( E > 0) count++;
    if ( F > 0) count++;
    if ( A > 0)
    {
        
        A_ = A;

    }
    else
    {
        A_ = 0;
    }
    if ( B > 0)
    {
        
        B_ = B;
    }
    else
    {
        B_ = 0;
    }
    if ( C > 0)
    {
        C_ = C;
    }
    else
    {
        C_ = 0;
    }
    if ( D > 0)
    {
        
        D_ = D;
    }
    else
    {
        D_ = 0;
    }
    if ( E > 0)
    {
        
        E_ = E;
    }
    if ( F > 0)
    {
        
        F_ = F;
    }
    int count_ = count;

    double sum = (A_+B_+C_+D_+E_+F_);

    double AVG = (double) sum / count;


    printf("%d valores positivos\n",count_);
    printf("%0.1lf\n",(AVG));
    return 0;

    
}