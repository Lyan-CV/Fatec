#include <stdio.h>
#include <stdlib.h>

void main(){

    int i,j,matriz[4][4], maiores_num_lin[4]={0,0,0,0}, menores_num_col[4]={99999,99999,99999,99999};

    for (i = 0; i <4; i++)
    {
        for (j = 0; i <4; i++)
        {
            printf("Digite um numero para o indice [%d] [%d] do vetor: ", matriz[i][j]);
            scanf("%d", matriz[i][j]);

            if (matriz[i][j] > maiores_num_lin[i])
            {
                maiores_num_lin[i] = matriz[i][j];
            }
            if (matriz[i][j] < menores_num_col[j])
            {
                menores_num_col[j] = matriz[i][j];
            }
            
        }
        
    }
    for (i = 0; i <4; i++)
    {
        printf("\nMenores numeros de cada coluna: %d", menores_num_col[i]);
    }
    for (i = 0; i <4; i++)
    {
        printf("\nMaiores numeros de cada linha: %d", maiores_num_lin[i]);
    }
    
    
    
    

}