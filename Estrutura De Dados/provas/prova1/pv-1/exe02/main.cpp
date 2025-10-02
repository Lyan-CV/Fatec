#include <stdio.h>
#include <stdlib.h>
//Dupla: Lyan Carvalho Viana e Gabrielli
void main(){
    int linhas, colunas, matriz[100][100],i,j, nums_impar=0, nums_pares=0, nums_nega=0, nums_posi=0;
    float valor_max, valor_min;

    printf("Quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("Quantidade de colunas: ");
    scanf("%d", &colunas);

    printf("Valor Maximo: ");
    scanf("%f", &valor_max);

    printf("Valor Minimo: ");
    scanf("%f", &valor_min);

    for (i = 0; i <linhas; i++)
    {
        for(j=0;j<linhas;j++){
            printf("\nDigite o %d valor da linha\n", i);
            scanf("%d",&matriz[i][j]);

            if(matriz[j][i] > valor_max || matriz[j][i] < valor_min){
                printf("\nValor fora dos limites!\n");
                i--;
            }else{
                if (matriz[j][i] > 0)
                {
                    nums_posi++;
                }else if(matriz[j][i]<0){
                    nums_nega++;
                }else if((matriz[j][i]%2) == 0){
                    nums_pares++;
                }else if((matriz[j][i]%2) == 0){
                    nums_impar++;
                }

                
            }
        }

    }

    printf("Numeros pares: %d", nums_pares);
    printf("Numeros negativos: %d", nums_nega);
    printf("Numeros impares: %d", nums_impar);
    printf("Numeros positivos: %d", nums_posi);
    

}