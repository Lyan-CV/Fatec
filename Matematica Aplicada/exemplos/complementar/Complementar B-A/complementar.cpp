#include <stdlib.h>
#include <stdio.h>
int main(){

    int chave,C =0,i,j, A [] = {0,-3,7,4,9,12}, B [] ={0,-9,5,-2,-3,12}, CBA [5];

    for (i = 1; i <=5; i++)
    {
        chave = 1;
        for (j = 1; j <=5; j++)
        {
            if (B[i] == A[j])
            {
                chave =0;
                j=10;
            }
            
        }
        if (chave ==1)
        {
            CBA[C]=B[i];
            chave=0;
            C=C+1;
        }
        
        
    }

    for (i = 0; i <C; i++)
    {
        printf("\n %d",CBA[i]);
    }
    
    

    
    return 0;
}