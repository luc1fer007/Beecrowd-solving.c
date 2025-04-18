#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
                            /*When any  outer loop runs one time the inner loop runs full times 
                            by the condition */
int main()
{
    float avg;
    
    int i,j, N;
    scanf("%d",&N);
    float arr[N][3]; 
    for( i = 0 ; i < N ; i++)   //N is the decider of how many times the code will run..
    {
        for( j = 0 ; j < 3 ; j++)  // in the questions the colum will be fixed..
        {
            
            scanf("%f",&arr[i][j]);    // scanf should not have any space.. it will scanf 3 columns..
        }
    }
    for( i = 0 ; i < N ; i++)      // dont have to use nested cause coulumn and elements are fixed
    { 
 
        sum = ( arr[i][0] * 2) + (arr[i][1] * 3) + (arr[i][2] * 5 ); // fixed the coulumn and row will increse
        avg = (float)sum / 10.0;
        printf("%.1f\n",avg);     //avg shoud be printed inside the for loop otherwise it will print the last one.
        
       
    
    }
    
   
    return 0;
}

