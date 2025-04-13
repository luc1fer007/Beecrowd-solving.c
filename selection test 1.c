#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>


// int selection(int ,int ,int ,int);
int main()
{
    int A,B,C,D,sum1,sum2;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    sum1 = A +B;
    sum2 = C+D;

    

    

    if(B>C && D>A && ((C+D)>(A+B)) && (C>0) && (D>0) && (A%2==0) )
    {
        printf("Valores nao aceitos\n");

    }
    else
    {
        printf("Valores aceitos\n");
    }


   
    return 0;
}

// int selection(int A ,int B,int C,int D)
// {
//     int sum1,sum2;
//     if(B>C && D>A)
//     {
//         if(sum2>sum1)
//         {
//             if(C>0 && D>0 && (A %2==0))
//             {
//                 printf("Valores aceitos\n");
                
            
//             }
//         }
//     }
//     else
//     {
//         printf("Valores nao aceitos\n");
//     }
    
// }


 // if(B>C && D>A)
    // {
    //     if(sum2>sum1)
    //     {
    //         if(C>0 && D>0 && (A %2==0))
    //         {
    //             printf("Valores nao aceitos\n");
                
            
    //         }
    //     }
    // }
    // else
    // {
    //     printf("Valores aceitos\n");
    // }
    