#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char name1[50],name2[50],name3[50];

    scanf("%s",&name1);
    scanf("%s",&name2);
    scanf("%s",&name3);
    
    // printf("%s\n",name1);
    // printf("%s\n",name2);
    // printf("%s\n",name3);
    
    if ( strcmpi(name1 ,"vertebrado") == 0)
    {
        ;
    }
    else 
    {
        if ((strcmpi(name1 , "invertebrado")) == 0)
        {
            if ((strcmpi(name2,"inseto")) == 0)
            {
                if((strcmpi(name3,"hematofago")) == 0)
                {
                    printf("pulga\n");
                }
                else
                {
                    if ((strcmpi(name3,"herbivoro")) == 0)
                    {
                        printf("lagarta\n");
                    }
                }

            }
            else
            {

        
            }
        
        else
        {
            if((strcmpi(name2,"anelideo")) == 0)
            {
               ;
            }
        }
        
        }
        
    } 
 
   

}