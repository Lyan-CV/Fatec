#include <stdio.h>
#include <stdlib.h>

void main(){
    int linha, coluna, matriz[3][3];

    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna <=2; coluna++)
        {
            printf("Informe o valor da posicao [%d][%d]: ",linha,coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
        printf("\n");
    }

    printf("Exibindo todos os valores! \n");

    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna <=2; coluna++)
        {
            printf("Matriz: %d: ",matriz[linha][coluna]);
            
        }
        printf("\n");
    }
    
    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna <=2; coluna++)
        {
            if (matriz[linha][coluna] %2 ==0)
            {
                printf("Matriz: %d: ",matriz[linha][coluna]);
            }
        }
        printf("\n");
    }
    for (linha = 0; linha <= 2; linha++)
    {
        for (coluna = 0; coluna <=2; coluna++)
        {
            if (matriz[linha][coluna] %2 ==1)
            {
                printf("Matriz: %d: ",matriz[linha][coluna]);
            }
        }
        printf("\n");
    }

}