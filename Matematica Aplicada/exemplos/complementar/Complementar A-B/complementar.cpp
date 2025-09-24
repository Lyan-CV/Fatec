#include <stdlib.h>
#include <stdio.h>
int main(){

    int C =0,i,j, A [] = {-3,7,4,9,12}, B [] ={-9,5,-2,3,12}, CAB [5];

    for (i = 0; i <6; i++)
    {
        int chave = 1;
        for (j = 0; j <6; j++)
        {
            if (A[i] == B[j])
            {
                chave =0;
                j=10;
            }
            
        }
        if (chave ==1)
        {
            CAB[C]=A[i];
            chave=0;
            C=C+1;
        }
        
        
    }

    for (i = 0; i <C-1; i++)
    {
        printf("\n %d",CAB[i]);
    }
    
    

    
    return 0;
}