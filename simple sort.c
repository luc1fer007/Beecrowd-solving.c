#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int i , temp;
    int arr[3],original[3];
    for (i = 0 ; i < 3 ; i++)
    {
        scanf("%d",&arr[i]);
        original[i] = arr[i]; //for original copy
    }
    if ( arr[0] > arr[1])
    {
        temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;    // no swap cause ( 7 < 21)
    }
    if ( arr[1] > arr[2])
    {
        temp = arr[1];
        arr[1] = arr[2];
        arr[2] = temp;  // swap case ( 21 > -14) and the arr updated ( 7,-14,21)
    }
    if ( arr[0] > arr[1])
    {
        temp = arr[0];
        arr[0] = arr[1];  // after arr updates ( 7, -14 , 21)
        arr[1] = temp; // swap cause ( 7 > -14 )
    }
    for ( int i = 0 ; i < 3 ; i++)
    {
        printf("%d\n",arr[i]); // updated copy
    }
    printf("\n");
    for (int i = 0 ; i < 3 ; i++)
    {
        printf("%d\n", original[i]); //for original copy
    }
}