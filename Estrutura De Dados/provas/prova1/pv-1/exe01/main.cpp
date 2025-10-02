#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Dupla: Lyan Carvalho Viana e Gabrielli
void main(){

    int num_bin[8], decimal=0,i,j[8]={7,6,5,4,3,2,1,0};

    for (i = 0; i <8; i++)
    {
        printf("\nDigite o numero binario da %dª casa: ",i);
        scanf("%d", &num_bin[i]);
        if (num_bin[i] > 1 || num_bin[i]<0)
        {
            printf("\n%d nao e um numero binario\n", num_bin[i]);
            i--;
        }else
        {
            decimal += pow((num_bin[i]*2),j[i]);  
        }
        
    }

    printf("\nO Decimal é igual a %d", decimal);
    

}